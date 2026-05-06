#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "===================================" << endl;
    cout << "   COMPARADOR DE NUMEROS ENTEROS   " << endl;
    cout << "===================================" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "-----------------------------------" << endl;

    if (num1 > num2) {
        cout << "El numero mayor es: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "El numero mayor es: " << num2 << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }

    cout << "Proceso finalizado." << endl;

    return 0;
}