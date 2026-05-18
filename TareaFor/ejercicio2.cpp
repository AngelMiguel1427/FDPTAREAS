/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci.*/
#include <iostream>
using namespace std;
int main(){
    int n, a = 0, b = 1, c;
    cout << "Ingrese el número de términos de la serie de Fibonacci: ";
    cin >> n;
    cout << "Serie de Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;

}