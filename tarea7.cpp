#include <iostream>
#include <string>
using namespace std;
int main()
{
    string contra = "elpapu", usuario="angel";
    int intentos = 3;

    cout << "===================================" << endl;
    cout << "   Bienvenido a facebook        " << endl;
    cout << "===================================" << endl;
    cout << "Ingrese su usuario: ";
    cin >> usuario;
    cout << "Ingrese su contrasena: ";
    cin >> contra;
    if (usuario == "angel" && contra == "elpapu")
    {
        cout << "Acceso concedido. Bienvenido!" << endl;
    }
    else
    {
        while (intentos > 0)
        {
            cout << "Usuario o contrasena incorrectos. Intentos restantes: " << intentos - 1 << endl;
            cout << "Ingrese su usuario: ";
            cin >> usuario;
            cout << "Ingrese su contrasena: ";
            cin >> contra;

            if (usuario == "angel" && contra == "elpapu")
            {
                cout << "Acceso concedido. Bienvenido!" << endl;
                break;
            }
            intentos--;
        }
        if (intentos == 0)
        {
            cout << "Cuenta bloqueada por demasiados intentos fallidos." << endl;
        }
    }
}