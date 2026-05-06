#include <iostream>
#include <string>
using namespace std;
int main (){
    string contra1, contra2, usuario;  
    cout << "===================================" << endl;
    cout << "   Bienvenido a facebook        " << endl; 
    cout << "===================================" << endl;  
    cout << "Ingrese su usuario: ";
    cin >> usuario;         
    cout << "Ingrese su contrasena: ";
    cin >> contra1; 
    cout << "Confirme su contrasena: ";
    cin >> contra2;         
    if (contra1 == contra2)
    {
        cout << "Usuario registrado exitosamente!" << endl;
    }
    else
    {
        cout << "Error: las contrasenas no coinciden. Intente de nuevo." << endl;
    }   
    

}