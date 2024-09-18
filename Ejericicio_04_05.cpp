// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 5
// Problema planteado: Combinar dos vectores en un tercero.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimensión de los vectores: ";
    cin >> N;

    vector<int> A(N), B(N), C(2 * N); // Declarar vectores A, B y C

    // Leer elementos del vector A
    cout << "Ingrese los elementos del vector A:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> A[i];
    }

    // Leer elementos del vector B
    cout << "Ingrese los elementos del vector B:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> B[i];
    }

    // Combinar A y B en el vector C
    for (int i = 0; i < N; i++) {
        C[i] = A[i];          // Copiar elementos de A
        C[i + N] = B[i];      // Copiar elementos de B
    }

    // Mostrar el vector combinado
    cout << "Vector combinado (A y B):" << endl;
    for (int i = 0; i < 2 * N; i++) {
        cout << "Elemento " << (i + 1) << ": " << C[i] << endl;
    }

    return 0;
}
