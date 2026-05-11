/*Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int N;
    cout << "Ingrese un número: ";
    cin >> N;
    while (N >= 0)
    {
        cout << N << " ";
        N--;
    }
    return 0;
}