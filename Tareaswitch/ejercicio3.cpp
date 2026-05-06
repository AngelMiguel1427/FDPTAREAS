/*Clasificacion 
G,PG, PG-13, R */ 

#include <iostream>
using namespace std;
int main() {
    cout<< "Bienvenido al clasificador de peliculas" << endl;
    int edad;
    cout << "Ingrese su edad para conocer la clasificacion de peliculas que puede ver: ";
    cin >> edad;
    switch (edad)
    {    case 0 ... 12:
        cout << "G: Apta para todo publico" << endl;
        break;  
    case 13 ... 15:
        cout << "PG: Se recomienda la supervision de un adulto" << endl;
        break;
    case 16 ... 17:
        cout << "PG-13: No se recomienda para menores de 13 años" << endl;
        break;
    case 18 ... 120:    
        cout << "R: Restringida, no se recomienda para menores de 17 años" << endl;
        break;
    default:
        cout << "Edad invalida, por favor ingrese una edad entre 0 y    120." << endl;
        break;  
        return 0;
    }
}