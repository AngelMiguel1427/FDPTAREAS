#include <iostream>
using namespace std;

int main()
{
    float consumo;

    cout << "======================================" << endl;
    cout << "   BIENVENIDO AL SISTEMA DE TARIFAS   " << endl;
    cout << "======================================" << endl;

    cout << "Ingrese el consumo de energia (kWh): ";
    cin >> consumo;

    if (consumo < 0)
    {
        cout << "Error: el consumo no puede ser negativo." << endl;
    }
    else if (consumo < 100)
    {
        cout << "Tarifa: BAJA" << endl;
    }
    else if (consumo <= 200)
    {
        cout << "Tarifa: MEDIA" << endl;
    }
    else
    {
        cout << "Tarifa: ALTA" << endl;
    }

    cout << "======================================" << endl;
    cout << "Gracias por usar el sistema." << endl;

    return 0;
}