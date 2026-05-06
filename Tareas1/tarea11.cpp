#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;

    cout << "==========================================" << endl;
    cout << "   SISTEMA DE CALIFICACION DE CONDUCTOR   " << endl;
    cout << "==========================================" << endl;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese numero de infracciones: ";
    cin >> infracciones;

    cout << "Ingrese anios de experiencia: ";
    cin >> experiencia;

    // Validaciones básicas
    if (edad < 0 || infracciones < 0 || experiencia < 0) {
        cout << "Error: No se permiten valores negativos." << endl;
    }
    else if (edad < 18) {
        cout << "Estado: NO APTO (Menor de edad)" << endl;
    }
    else {
        // Evaluación del conductor
        if (infracciones == 0 && experiencia >= 3) {
            cout << "Estado: EXCELENTE CONDUCTOR" << endl;
        }
        else if (infracciones <= 2 && experiencia >= 1) {
            cout << "Estado: BUEN CONDUCTOR" << endl;
        }
        else if (infracciones <= 5) {
            cout << "Estado: CONDUCTOR REGULAR" << endl;
        }
        else {
            cout << "Estado: CONDUCTOR DE RIESGO" << endl;
        }
    }

    cout << "==========================================" << endl;
    cout << "Evaluacion finalizada." << endl;

    return 0;
}