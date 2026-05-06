#include <iostream>
using namespace std;
int main() {

    cout << "Bienvenido al conversor de dolares  " << endl;
    double dolares, euros, yenes, libras;
    cout << " seleccione la moneda a la que desea convertir: " << endl;
    cout << "1. Euros" << endl;
    cout << "2. Yenes" << endl;
    cout << "3. Libras" << endl;
    int opcion;
    cout << "Ingrese su opcion: ";
    cin >> opcion;
    cout << "Ingrese la cantidad de dolares que desea convertir: ";
    cin >> dolares;
    euros = dolares * 0.85; // Tasa de cambio aproximada
    yenes = dolares * 157.2; // Tasa de cambio aproximada   
    libras = dolares * 0.75; // Tasa de cambio aproximada

    switch (opcion)
    {    case 1:
        cout << dolares << " dolares son equivalentes a " << euros << " euros." << endl;
        break;  
    case 2:
        cout << dolares << " dolares son equivalentes a " << yenes << "yenes." << endl;
        break;
    case 3:
        cout << dolares << " dolares son equivalentes a " << libras << "libras." << endl;
        break;
    default:    
        cout << "Opcion invalida, por favor seleccione una opcion del 1 al 3." << endl;
        break;
    }   
    
}