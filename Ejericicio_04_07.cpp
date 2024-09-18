// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 7
// Problema planteado: Rellenar un vector y mostrar los elementos introducidos.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SIZE = 10; // Tamaño del vector
    vector<int> numeros; // Vector para almacenar los números

    // Pedir números hasta que el vector esté lleno o se introduzca un número negativo
    cout << "Introduzca hasta 10 números enteros (un número negativo para finalizar):" << endl;

    for (int i = 0; i < SIZE; i++) {
        int numero;
        cout << "Elemento " << (i + 1) << ": ";
        cin >> numero;

        if (numero < 0) {
            break; // Salir del bucle si se introduce un número negativo
        }

        numeros.push_back(numero); // Agregar número al vector
    }

    // Mostrar los elementos introducidos
    cout << "\nElementos introducidos en el vector:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << "Elemento " << (i + 1) << ": " << numeros[i] << endl;
    }

    return 0;
}
