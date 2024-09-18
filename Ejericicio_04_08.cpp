// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 8
// Problema planteado: Buscar producción de minerales y ordenarlos.

#include <iostream>
#include <iomanip> // Para setprecision
#include <string>
#include <vector>
#include <algorithm> // Para sort
using namespace std;

// Estructura para almacenar mineral y producción
struct Mineral {
    string nombre;
    double produccion;
};

// Función para buscar la producción por nombre de mineral
void buscarProduccion(const vector<Mineral>& minerales, const string& nombre) {
    for (const auto& mineral : minerales) {
        if (mineral.nombre == nombre) {
            cout << "Producción de " << nombre << ": " << fixed << setprecision(3) << mineral.produccion << " toneladas métricas." << endl;
            return;
        }
    }
    cout << "Mineral no encontrado." << endl;
}

int main() {
    // Declarar los minerales y su producción
    const vector<Mineral> minerales = {
        {"SN", 998.000},
        {"SB", 876.500},
        {"AU", 786.670},
        {"PT", 636.143},
        {"AG", 135.567},
        {"CU", 109.412}
    };

    // Buscar producción
    string nombreBuscado;
    cout << "Ingrese el nombre del mineral para buscar su producción: ";
    cin >> nombreBuscado;
    buscarProduccion(minerales, nombreBuscado);

    // Ordenar los minerales por producción del mayor al menor
    vector<Mineral> mineralesOrdenados = minerales; // Copia para ordenar
    sort(mineralesOrdenados.begin(), mineralesOrdenados.end(), [](const Mineral& a, const Mineral& b) {
        return a.produccion > b.produccion; // Ordenar de mayor a menor
    });

    // Mostrar los minerales ordenados
    cout << "\nMinerales ordenados por producción (mayor a menor):" << endl;
    cout << left << setw(10) << "Mineral" << "Producción (toneladas métricas)" << endl;
    for (const auto& mineral : mineralesOrdenados) {
        cout << left << setw(10) << mineral.nombre << fixed << setprecision(3) << mineral.produccion << endl;
    }

    return 0;
}
