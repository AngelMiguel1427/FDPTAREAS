/*Menú Interactivo Crea un menú que se repita hasta que el usuario elija la opción de salir.*/
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(65001);
    int opcion;

    do {
        cout << "==========================" << endl;
        cout<< "¿En que te podemos ayudar?." << endl;
        cout << "==========================" << endl;
        cout << "Menú Interactivo" << endl;
        cout << "1. Opción 1 (preguntas menos frecuentes)" << endl;
        cout << "2. Opción 2 (dudas con el producto)" << endl;
        cout << "3. Opción 3 (contacto con asistente)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";

        cout<< "¿En que te podemos ayudar?." << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "¿Tienes problemas inusuales?." << endl;
                break;
            case 2:
                cout << "¿Dudas con el producto?." << endl;
                break;
            case 3:
                cout << "Contacta directamente con un asistente en linea." << endl;
                break;
            case 4:
                cout << "Gracias por utilizar nuestro servicio." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}