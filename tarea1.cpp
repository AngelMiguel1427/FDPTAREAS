#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "==============================" << endl;
    cout << "  BIENVENIDO AL PROGRAMA EDAD " << endl;
    cout << "==============================" << endl;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "------------------------------" << endl;

    if (edad >= 18) {
        cout << "Resultado: Usted es MAYOR de edad." << endl;
    } else {
        cout << "Resultado: Usted es MENOR de edad." << endl;
    }

    cout << "Gracias por usar el programa." << endl;

    return 0;
}