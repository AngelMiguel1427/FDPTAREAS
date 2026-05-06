#include <iostream>
#include <string>
using namespace std;
int main()
{
    float precio;
    int edad;
    cout << " ====================================" << endl;
    cout << "   Bienvenido al parque de diversiones    " << endl;
    cout << " ====================================" << endl;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (cin.fail() || edad < 0 || edad > 120)
    {
        cout << "Error: edad invalida. Ingrese un valor entre 0 y 120." << endl;
    }
    else if (edad < 5)
    {
        precio = 0.0;
        cout << "Precio de entrada: $" << precio << " (entrada gratuita)" << endl;
    }
    else if (edad >= 5 && edad <= 12)
    {
        precio = 10.0;
        cout << "Precio de entrada: $" << precio << endl;
    }
    else if (edad > 12 && edad <= 18)
    {
        precio = 15.0;
        cout << "Precio de entrada: $" << precio << endl;
    }
    else
    {
        precio = 20.0;
        cout << "Precio de entrada: $" << precio << endl;
    }

    return 0;
}