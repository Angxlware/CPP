#include<iostream>

using namespace std;

int main()
{
    int arreglo[10];
    int numMayor = 0;

    cout<<"Ingrese los valores del arreglo"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Valor #"<<(i + 1)<<": ";
        cin>>arreglo[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] > numMayor)
                numMayor = arreglo[i];
    }

    cout<<"El número mayor es: "<<numMayor<<endl;
}
