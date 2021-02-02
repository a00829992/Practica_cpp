#include <iostream>

using namespace std;

class MiClase
{
    int var1;

public:
    MiClase();
    MiClase(int v1);
    int getClase();
    void setClase(int v1);
};

MiClase::MiClase()
{
    var1 = 0;
}

MiClase::MiClase(int v1)
{
    var1 = v1;
}

int MiClase::getClase()
{
    return var1;
}

void MiClase::setClase(int v1)
{
    var1 = v1;
}

int const N=10;

int main()
{
    MiClase miObjeto;
    miObjeto.setClase(1500);
    cout<<miObjeto.getClase()<<endl;
    MiClase miArreglo[N];
    cout<<miArreglo[5].getClase()<<endl;
    return 0;
}







