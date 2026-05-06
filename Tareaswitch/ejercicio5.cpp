/*Cálculo de Impuestos
Solicita el salario de un trabajador y muestra el porcentaje de impuestos a pagar según su rango de ingresos.*/

#include <iostream>
using namespace std;
int main(){
    double salario;
    cout << "Ingrese el salario del trabajador: ";
    cin >> salario;
    switch (static_cast<int>(salario / 1000)) {
        case 0:
        case 1:
            cout << "El porcentaje de impuestos a pagar es: 10%" << endl;
            break;
        case 2:
        case 3:
            cout << "El porcentaje de impuestos a pagar es: 15%" << endl;
            break;
        case 4:
        case 5:
            cout << "El porcentaje de impuestos a pagar es: 20%" << endl;
            break;
        default:
            cout << "El porcentaje de impuestos a pagar es: 25%" << endl;
            break;
    }
    cout << "Su impuesto a pagar es: " << salario * 0.1 << endl;



    return 0;


}
