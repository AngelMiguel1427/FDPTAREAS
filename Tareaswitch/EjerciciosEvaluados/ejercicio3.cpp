/* Horario de Clases Pide el día de la semana y muestra el horario de clases para ese día. */  
#include <iostream>
using namespace std;
int main (){
    int dia;
    cout << "Bienvenido al horario de clases!" << endl;
    cout << "Ingrese el numero del dia de la semana (1-7): " << endl;
    cout << "1: Lunes" << endl;
    cout << "2: Martes" << endl;
    cout << "3: Miercoles" << endl;
    cout << "4: Jueves" << endl;
    cout << "5: Viernes" << endl;
    cout << "6: Sabado" << endl;
    cout << "7: Domingo" << endl;
    cin >> dia;
    switch (dia)
    {   case 1:
        cout << "Horario del Lunes: Matematicas, Fisica, Quimica" << endl;
        break;
    case 2:
        cout << "Horario del Martes: Literatura, Historia, Biologia" << endl;    
        break;
    case 3:
        cout << "Horario del Miercoles: Informatica, Arte, Musica" << endl;      
        break;
    case 4:
        cout << "Horario del Jueves: Educacion Fisica, Filosofia, Economia" << endl;    
        break;
    case 5:
        cout << "Horario del Viernes: Idiomas, Tecnologia, Civica" << endl;    
        break;
    case 6:
        cout << "Horario del Sabado: No hay clases, es fin de semana!" << endl;    
        break;
    case 7:
        cout << "Horario del Domingo: No hay clases, es fin de semana!" << endl;    
        break;    
    default:
        cout << "Numero de dia invalido. Por favor ingrese un numero entre 1 y 7." << endl;    
        break;
    }
     cout<< "Gracias por consultar el horario de clases!"<<endl; 
     return 0;

}