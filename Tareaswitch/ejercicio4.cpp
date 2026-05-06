/*Tipo de Triángulo
Solicita tres lados de un triángulo y usa switch para determinar si es equilátero, isósceles o escaleno.

*/ 

#include <iostream>
using namespace std;
int main() {

    cout<<"tipos de triangulo "<< endl;
    double a, b, c;
    cout <<" ingrese los lado 1: ";
    cin >> a;
    cout <<" ingrese los lado 2: ";
    cin >> b;
    cout <<" ingrese los lado 3: ";
    cin >> c;
   
   switch ((a == b) + (b == c) + (a == c))
   {    case 3:
        cout << "Equilatero: los tres lados son iguales" << endl;
        break;  
    case 1:
        cout << "Isosceles: dos lados son iguales" << endl;
        break;
    case 0:
        cout << "Escaleno: los tres lados son diferentes" << endl;
        break;  
    default:
        cout << "Los valores ingresados no forman un triángulo válido." << endl;
        break;  
   }
    

}