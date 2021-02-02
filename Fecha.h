class Fecha
{
    int dia;
    int mes;

public:
    Fecha();
    Fecha(int dia, int mes);
    int getDia();
    int getMes();
    void setDia(int dia);
    void setMes(int mes);
};

Fecha::Fecha()
{
    dia=0;
    dia=0;
}

Fecha::Fecha(int dia, int mes)
{
    this->dia=dia;
    this->mes=mes;
}

int Fecha::getDia()
{
    return dia;
}

int Fecha::getMes()
{
    return mes;
}

void Fecha::setDia(int dia)
{
    this->dia=dia;
}

void Fecha::setMes(int mes)
{
    this->mes=mes;
}