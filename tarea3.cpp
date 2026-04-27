#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "===================================" << endl;
    cout << "   SISTEMA DE CALIFICACIONES       " << endl;
    cout << "===================================" << endl;

    cout << "Ingrese la calificacion del estudiante: ";
    cin >> nota;

    cout << "-----------------------------------" << endl;

    if (nota >= 6.0) {
        cout << "Resultado: APROBADO." << endl;
    } else {
        cout << "Resultado: REPROBADO." << endl;
    }

    cout << "Gracias por utilizar el sistema." << endl;

    return 0;
}