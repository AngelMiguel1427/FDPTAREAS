/*Conversión de Unidades de Longitud Pide una opción (1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas) y realiza la conversión.*/ 
#include <iostream>
using namespace std;
int main()
{
    int opcion;
    double valor, resultado;
    cout << "Bienvenido al convertidor de unidades de longitud!" << endl;
    cout << "Seleccione la conversion que desea realizar: " << endl;
    cout << "1: Centimetros a Pulgadas" << endl;
    cout << "2: Metros a Pies" << endl;
    cout << "3: Kilometros a Millas" << endl;
    cin >> opcion;
    switch (opcion)
    {   case 1:
        cout << "Ingrese el valor en centimetros: ";
        cin >> valor;
        resultado = valor / 2.54; // 1 pulgada = 2.54 cm
        cout << valor << " centimetros son " << resultado << " pulgadas." << endl;
        break;
    case 2:
        cout << "Ingrese el valor en metros: ";
        cin >> valor;
        resultado = valor * 3.28084; // 1 metro = 3.28084 pies
        cout << valor << " metros son " << resultado << " pies." << endl;
        break;
    case 3:
        cout << "Ingrese el valor en kilometros: ";
        cin >> valor;
        resultado = valor * 0.621371; // 1 kilometro = 0.621371 millas
        cout << valor << " kilometros son " << resultado << " millas." << endl;
        break;
    default:
        cout << "Opcion invalida. Por favor seleccione una opcion entre 1 y 3." << endl;
        break;
    }
     cout<< "Gracias por usar el convertidor de unidades de longitud!"<<endl; 
     return 0;

}