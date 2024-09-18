// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 12/09/2024
// Número de ejercicio: 1
// Problema planteado: Declarar vectores de diferentes tipos y tamaños.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaraciones de vectores
    vector<double> voltajes(100);          
    vector<double> temperaturas(50);       
    vector<char> codigos(30);             
    vector<int> años(100);                
    vector<double> velocidades(32);        
    vector<double> distancias(1000);      
    vector<int> codigosEnteros(6);         

    cout << "Vectores declarados correctamente." << endl;

    return 0;
}
