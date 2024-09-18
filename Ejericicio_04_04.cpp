// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 4
// Problema planteado: Multiplicar dos vectores y almacenar el resultado en un tercer vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimensión de los vectores: ";
    cin >> N;

    vector<int> A(N), B(N), C(N); // Declarar vectores A, B y C

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

    // Calcular la multiplicación de A y B, y almacenar en C
    for (int i = 0; i < N; i++) {
        C[i] = A[i] * B[i];
    }

    // Mostrar el resultado de la multiplicación
    cout << "Resultado de la multiplicación de A y B:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << (i + 1) << ": " << C[i] << endl;
    }

    return 0;
}
