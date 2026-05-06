/*Sistema de Puntuación de Videojuegos
Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño. */
#include <iostream>
using namespace std;
int main()
{
    int puntuacion;
    cout<< "Bienvenido a nuestro calificador de God Of War " << endl;
    cout << "Ingrese su puntuacion (1-5 estrellas): " << endl;
    cout << "1 estrella: Muy malo" << endl;
    cout << "2 estrellas: Malo" << endl;
    cout << "3 estrellas: Regular" << endl;
    cout << "4 estrellas: Bueno" << endl;
    cout << "5 estrellas: Excelente" << endl;
    cin >> puntuacion;
    switch (puntuacion)
    {    case 1:
        cout << "Puntuacion: Muy malo" << endl;
        break;
    case 2:    
        cout << "Puntuacion: Malo" << endl;
        break;
    case 3:
        cout << "Puntuacion: Regular" << endl;      
        break;
    case 4:
        cout << "Puntuacion: Bueno" << endl;    
        break;
    case 5: 
        cout << "Puntuacion: Excelente" << endl;    
        break;
    default:
        cout << "Puntuacion invalida. Por favor ingrese un numero entre 1 y 5." << endl;
        break;
    }
     cout << "Gracias por calificar nuestro juego!" << endl;
    return 0;
}
