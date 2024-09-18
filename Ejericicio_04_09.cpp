// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 9
// Problema planteado: Calcular la desviación típica de edades.

#include <iostream>
#include <vector>
#include <cmath> // Para sqrt() y pow()
using namespace std;

int main() {
    vector<int> edades; // Vector para almacenar las edades
    int edad;

    // Leer edades hasta que se ingrese -1
    cout << "Ingrese las edades de las personas (ingrese -1 para terminar):" << endl;
    while (true) {
        cout << "Edad: ";
        cin >> edad;
        if (edad == -1) {
            break; // Termina la entrada si se ingresa -1
        }
        edades.push_back(edad); // Agregar edad al vector
    }

    // Verificar si se ingresaron edades
    if (edades.empty()) {
        cout << "No se ingresaron edades." << endl;
        return 0;
    }

    // Calcular la media
    double suma = 0;
    for (int e : edades) {
        suma += e;
    }
    double media = suma / edades.size();

    // Calcular la desviación estándar
    double sumaDesviaciones = 0;
    for (int e : edades) {
        sumaDesviaciones += pow(e - media, 2); // Sumar el cuadrado de las desviaciones
    }
    double varianza = sumaDesviaciones / edades.size(); // Varianza
    double desviacionTipica = sqrt(varianza); // Desviación típica

    // Mostrar resultados
    cout << "Media de edades: " << media << endl;
    cout << "Desviación típica de edades: " << desviacionTipica << endl;

    return 0;
}
