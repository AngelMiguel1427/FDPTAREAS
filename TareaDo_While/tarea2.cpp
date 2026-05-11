/*Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados de manera ordenada y secuencial pide que vaya ingresando cada unop de ellos.*/
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    int numero, suma = 0;
    cout << "Ingrese números (0 para terminar): ";
    do
    {
        cin >> numero;
        suma += numero;
    } while (numero != 0);
    
    cout << "La suma de los números ingresados es: " << suma << endl;
    return 0;
}