/*Suma de Números Pares
Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    int N, suma = 0, i = 1;
    cout << "Ingrese un número N: ";
    cin >> N;

    while (i <= N)
    {
        if (i % 2 == 0) 
        {
            suma += i;
        }
        i++;
    }

    cout << "La suma de los números pares desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}