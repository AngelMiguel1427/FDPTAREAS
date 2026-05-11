/* Calculadora Avanzada
Mejora la calculadora simple agregando ^ para exponenciación y % para módulo.*/
#include <iostream>
#include <cmath> // Para la función pow y fmod
using namespace std;
int main ()
{    
    double num1, num2;
    char operacion;
    cout<< "Bienvenido a la calculadora mmejorada!" << endl;
    cout << " selecciona que tipo de operacion deseas realizar " << endl;
    cout << " + para suma " << endl;
    cout << " - para resta " << endl;
    cout << " * para multiplicacion " << endl;
    cout << " / para division " << endl;
    cout << " ^ para exponenciacion " << endl;
    cout << " % para modulo " << endl;
    cout << "Ingrese el tipo de operacion: ";
    cin >> operacion;
    switch (operacion)
    {    case '+':
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "Resultado: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "Resultado: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        if (num2 != 0) { // Verificar que el divisor no sea cero
            cout << "Resultado: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division por cero no permitida." << endl;
        }
        break;
    case '^':
        cout << "Ingrese la base: ";
        cin >> num1;
        cout << "Ingrese el exponente: ";
        cin >> num2;
        cout << "Resultado: " << pow(num1, num2) << endl;// Usar la función pow para calcular la potencia
        break;
    case '%':
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        if (num2 != 0) {// Verificar que el divisor no sea cero
            cout << "Resultado: " << fmod(num1, num2) << endl;// Usar la función fmod para calcular el módulo de números de punto flotante
        } else {
            cout << "Error: Modulo por cero no permitido." << endl;
        }
        break;
    default:
        cout << "Operacion no valida." << endl;
    }

    return 0;
}