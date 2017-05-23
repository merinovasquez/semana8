#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

struct TEmpleado;
{
    string nombre;
    string apellido;
    float sueldoPorHora;
    
    float sueldoTotal(int horas)
    {
        return horas * sueldoPorHora;
       
    }
    
};




int main()
{
    int opcion = 0;
    system ("clear");
    cout << "MENU" << endl;
    cout << string(4,'~') << endl << endl;
    
    cout << "1. Ingrese Empleado" << endl;
    cout << "2.Listar Empleados" << endl;
    cout <<"0.Para salir" << endl << endl;
    cout << "Opcion :";
    cin>> opcion;
    
    return 0;
}