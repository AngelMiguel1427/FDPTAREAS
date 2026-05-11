/*Serie de Fibonacci Muestra los primeros N términos de la serie de Fibonacci utilizando while.*/
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    int N, a = 0, b = 1, temp;
    cout << "Ingrese el número de términos de la serie de Fibonacci: ";
    cin >> N;

    cout << "Serie de Fibonacci: ";
    int count = 0;
    while (count < N)
    {
        cout << a << " ";
        temp = a;
        a = b;
        b = temp + b;
        count++;
    }
    cout << endl;

    return 0;
}