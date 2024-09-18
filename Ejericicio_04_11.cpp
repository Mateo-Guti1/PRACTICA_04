// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 11
// Problema planteado: Analizar las ventas mensuales de una empresa.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    const int NUM_MESES = 12;
    double ventas[NUM_MESES]; // Arreglo para las ventas mensuales
    const string meses[NUM_MESES] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", 
                                       "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

    // Leer las ventas mensuales
    cout << "Ingrese las ventas mensuales de la empresa:" << endl;
    for (int i = 0; i < NUM_MESES; i++) {
        cout << "Ventas de " << meses[i] << ": ";
        cin >> ventas[i];
    }

    // Calcular las ventas máximas y el total de ventas
    double ventasMaximas = ventas[0];
    vector<string> mesesMaximos;
    double totalVentas = 0;

    for (int i = 0; i < NUM_MESES; i++) {
        totalVentas += ventas[i]; // Sumar al total de ventas
        if (ventas[i] > ventasMaximas) {
            ventasMaximas = ventas[i];
            mesesMaximos.clear(); // Limpiar la lista de meses
            mesesMaximos.push_back(meses[i]); // Añadir el nuevo mes con ventas máximas
        } else if (ventas[i] == ventasMaximas) {
            mesesMaximos.push_back(meses[i]); // Añadir mes si es igual a las ventas máximas
        }
    }

    // Mostrar resultados
    cout << "\nMes(es) con ventas máximas: ";
    for (const string& mes : mesesMaximos) {
        cout << mes << " ";
    }
    cout << "\nVentas máximas: " << ventasMaximas << endl;
    cout << "Total de ventas: " << totalVentas << endl;

    return 0;
}
