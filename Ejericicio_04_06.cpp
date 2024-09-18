// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 6
// Problema planteado: Sumar dos vectores y almacenar el resultado en un tercer vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SIZE = 5; // Tamaño de los vectores
    vector<int> vector1(SIZE), vector2(SIZE), vector3(SIZE); // Declarar vectores

    // Leer elementos del vector1
    cout << "Ingrese los elementos del vector1:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector1[i];
    }

    // Leer elementos del vector2
    cout << "Ingrese los elementos del vector2:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector2[i];
    }

    // Calcular vector3 como la suma de vector1 y vector2
    for (int i = 0; i < SIZE; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado de vector3
    cout << "Resultado de vector3 (vector1 + vector2):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Elemento " << (i + 1) << ": " << vector3[i] << endl;
    }

    return 0;
}
