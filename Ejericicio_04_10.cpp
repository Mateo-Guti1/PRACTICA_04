// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 10
// Problema planteado: Analizar calificaciones y determinar el mejor y peor alumno, y la mejor carrera.

#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Para setprecision
#include <map> // Para contar calificaciones por carrera
using namespace std;

int main() {
    const int SIZE = 5; // Tamaño de los arreglos
    vector<string> nombres(SIZE);
    vector<double> calificaciones(SIZE);
    vector<string> carreras(SIZE);

    // Leer los datos
    for (int i = 0; i < SIZE; i++) {
        cout << "Ingrese el nombre del estudiante " << (i + 1) << ": ";
        cin >> nombres[i];
        cout << "Ingrese la calificación de " << nombres[i] << ": ";
        cin >> calificaciones[i];
        cout << "Ingrese la sigla de la carrera de " << nombres[i] << ": ";
        cin >> carreras[i];
    }

    // Inicializar variables para el análisis
    double maxCalificacion = calificaciones[0];
    double minCalificacion = calificaciones[0];
    string mejorAlumno = nombres[0];
    string peorAlumno = nombres[0];
    double sumaCalificaciones = 0;

    // Map para contar las calificaciones por carrera
    map<string, double> sumaCarreras;
    map<string, int> cuentaCarreras;

    for (int i = 0; i < SIZE; i++) {
        // Sumar calificaciones para promedio
        sumaCalificaciones += calificaciones[i];

        // Verificar mejor y peor alumno
        if (calificaciones[i] > maxCalificacion) {
            maxCalificacion = calificaciones[i];
            mejorAlumno = nombres[i];
        }
        if (calificaciones[i] < minCalificacion) {
            minCalificacion = calificaciones[i];
            peorAlumno = nombres[i];
        }

        // Acumular calificaciones por carrera
        sumaCarreras[carreras[i]] += calificaciones[i];
        cuentaCarreras[carreras[i]]++;
    }

    // Calcular promedio general
    double promedioGeneral = sumaCalificaciones / SIZE;

    // Determinar la carrera con el mejor desempeño
    string mejorCarrera;
    double mejorPromedio = 0;

    for (const auto& carrera : sumaCarreras) {
        double promedioCarrera = carrera.second / cuentaCarreras[carrera.first];
        if (promedioCarrera > mejorPromedio) {
            mejorPromedio = promedioCarrera;
            mejorCarrera = carrera.first;
        }
    }

    // Mostrar resultados
    cout << fixed << setprecision(2);
    cout << "\nEl mejor alumno es: " << mejorAlumno << " con una calificación de " << maxCalificacion << endl;
    cout << "El peor alumno es: " << peorAlumno << " con una calificación de " << minCalificacion << endl;
    cout << "El promedio general del curso es: " << promedioGeneral << endl;
    cout << "La carrera con mejor desempeño es: " << mejorCarrera << " con un promedio de " << mejorPromedio << endl;

    return 0;
}
