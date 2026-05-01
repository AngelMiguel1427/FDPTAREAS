#include <iostream>
using namespace std;
int main (){
    float velocidad;
    cout << "===================================" << endl;
    cout << "   CALCULADORA DE MULTAS  " << endl;
    cout << "===================================" << endl;  
    cout << "Ingrese la velocidad del vehiculo (km/h): ";
    cin >> velocidad;

    if (velocidad < 20)
    {
        cout << "No hay multa, conduzca con cuidado." << endl;
    }
    else if (velocidad >= 20 && velocidad < 40)
    {
        cout << "Multa leve: $50" << endl;
    }
    else if (velocidad >= 40 && velocidad < 60)
    {
        cout << "Multa moderada: $100" << endl;
    }
    else
    {
        cout << "Multa grave: $200" << endl;
    }
    
}