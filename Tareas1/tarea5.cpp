#include <iostream>
using namespace std;

int main() {
    float peso;

    cout << "===================================" << endl;
    cout << "   CALCULADORA DE ENVIO            " << endl;
    cout << "===================================" << endl;

    cout << "Ingrese el peso del paquete (kg): ";
    cin >> peso;

    cout << "-----------------------------------" << endl;

    if (peso <= 5) {
        cout << "Costo de envio: $5" << endl;
    } else if (peso <= 10) {
        cout << "Costo de envio: $10" << endl;
    } else {
        cout << "Costo de envio: $15" << endl;
    }

    cout << "Gracias por usar nuestro servicio." << endl;

    return 0;
}