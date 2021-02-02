#include <iostream>

using namespace std;

#include "Empleado.h"

int main()
{   Fecha mayo19(19, 5), enero1(1, 1);
    Empleado emp1("Pepe", 10000, 'A', mayo19), emp2("Rocio", 12000, 'B', enero1);
    Empleado empleados[2]={emp1, emp2};
    
    for(int i=0; i<2 ;i++){
        cout<<empleados[i].getNombreEmp()<<", "<<empleados[i].getSueldoEmp()<<", "<<empleados[i].getFecha().getDia()<<", "<<empleados[i].getFecha().getMes()<<" ;"<<endl;
    }

    empleados[0].promoverEmpleado('D');

    for(int i=0; i<2 ;i++){
        cout<<empleados[i].getNombreEmp()<<", "<<empleados[i].getSueldoEmp()<<", "<<empleados[i].getFecha().getDia()<<", "<<empleados[i].getFecha().getMes()<<" ;"<<endl;
    }

    return 0;
}


