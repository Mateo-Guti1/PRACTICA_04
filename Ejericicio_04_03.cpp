// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 3
// Problema planteado: Calcular desviaciones y varianza de calificaciones.

#include <iostream>
#include <vector>
#include <cmath> // Para usar pow()
using namespace std;

int main() {
    int N;
    cout << "Ingrese el número de calificaciones: ";
    cin >> N;

    vector<int> calificaciones(N);
    vector<double> desviaciones(N);
    int suma = 0;

    // Introducir calificaciones
    for (int i = 0; i < N; i++) {
        cout << "Ingrese calificación " << (i + 1) << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    // Calcular promedio
    double promedio = static_cast<double>(suma) / N;

    // Calcular desviaciones
    double varianza = 0;
    for (int i = 0; i < N; i++) {
        desviaciones[i] = calificaciones[i] - promedio;
        varianza += pow(desviaciones[i], 2); // Sumar el cuadrado de las desviaciones
    }
    varianza /= N; // Calcular la varianza

    // Mostrar resultados
    cout << "\nCalificaciones y sus desviaciones:\n";
    for (int i = 0; i < N; i++) {
        cout << "Calificación: " << calificaciones[i] << ", Desviación: " << desviaciones[i] << endl;
    }

    cout << "\nPromedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;

    return 0;
}
