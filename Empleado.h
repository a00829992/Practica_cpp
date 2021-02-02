#include <iostream>
using namespace std;
#include "Fecha.h"

class Empleado
{
private:
    string nombreEmp;
    float sueldoEmp;
    char categoriaEmp;
    Fecha cumpleAniosEmp;

public:
    Empleado();
    ~Empleado();
    Empleado(string nombreEmp, float sueldoEmp, char categoriaEmp, Fecha cumpleAniosEmp);
    string getNombreEmp();
    float getSueldoEmp();
    char getCategoriaEmp();
    Fecha getFecha();
    void setNombreEmp(string nombreEmp);
    void setSueldoEmp(float sueldoEmp);
    void setCategoriaEmp(char categoriaEmp);
    void setFecha(Fecha cumpleAniosEmp);
    void promoverEmpleado(char categoriaEmp);
};

Empleado::Empleado()
{
    nombreEmp = "Undefined";
    sueldoEmp = 0.00;
    categoriaEmp = 'A';
    Fecha fecha;
    cumpleAniosEmp = fecha;
}

Empleado::~Empleado()
{
}

Empleado::Empleado(string nombreEmp, float sueldoEmp, char categoriaEmp, Fecha cumpleAniosEmp)
{
    this->nombreEmp = nombreEmp;
    this->sueldoEmp = sueldoEmp;
    this->categoriaEmp = categoriaEmp;
    this->cumpleAniosEmp = cumpleAniosEmp;
}

string Empleado::getNombreEmp()
{
    return nombreEmp;
}

float Empleado::getSueldoEmp()
{
    return sueldoEmp;
}

char Empleado::getCategoriaEmp()
{
    return categoriaEmp;
}

Fecha Empleado::getFecha()
{
    return cumpleAniosEmp;
}

void Empleado::setNombreEmp(string nombreEmp)
{
    this->nombreEmp = nombreEmp;
}

void Empleado::setSueldoEmp(float sueldoEmp)
{
    this->sueldoEmp = sueldoEmp;
}

void Empleado::setCategoriaEmp(char categoriaEmp)
{
    this->categoriaEmp = categoriaEmp;
}

void Empleado::setFecha(Fecha cumpleAniosEmp)
{
    this->cumpleAniosEmp = cumpleAniosEmp;
}

void Empleado::promoverEmpleado(char categoria)
{

    if (categoria == 'A' || categoria == 'B' || categoria == 'C' || categoria == 'D')
    {
        if (categoriaEmp == 'A' && categoria == 'B' || categoriaEmp == 'B' && categoria == 'C' || categoriaEmp == 'C' && categoria == 'D')
        {
            sueldoEmp = sueldoEmp + (sueldoEmp * 0.025);
        }
        else if (categoriaEmp == 'A' && categoria == 'C' || categoriaEmp == 'B' && categoria == 'D')
        {
            sueldoEmp = sueldoEmp + (sueldoEmp * 0.05);
        }
        else if (categoriaEmp == 'A' && categoria == 'D')
        {
            sueldoEmp = sueldoEmp + (sueldoEmp * 0.075);
        }
        else if ((categoriaEmp == categoria) || ((categoriaEmp == 'D' && categoria == 'C' || 'B' || 'A') || (categoriaEmp == 'C' && categoria == 'B' || 'A') || (categoriaEmp == 'B' && categoria == 'A')))
        {
        }
    }
    else
    {
        cout << "Categoría inválida" << endl;
    }
}