#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, contrasena;

    string usuario_correcto = "admin";
    string contrasena_correcta = "1234";

    cout << "===================================" << endl;
    cout << "      SISTEMA DE ACCESO            " << endl;
    cout << "===================================" << endl;

    cout << "Ingrese usuario: ";
    cin >> usuario;

    cout << "Ingrese contrasena: ";
    cin >> contrasena;

    cout << "-----------------------------------" << endl;

    if (usuario == usuario_correcto && contrasena == contrasena_correcta) {
        cout << "Acceso concedido. Bienvenido!" << endl;
    } else {
        cout << "Error: Usuario o contrasena incorrectos." << endl;
    }

    cout << "Fin del programa." << endl;

    return 0;
}