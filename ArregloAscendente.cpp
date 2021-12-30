#include<iostream>

using namespace std;

int main()
{
    int arreglo[10], auxiliar;

    cout<<"Ingrese los valores del arreglo"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Valor #"<<(i + 1)<<": ";
        cin>>arreglo[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arreglo[j] < arreglo[j + 1])
            {
                auxiliar = arreglo[j + 1];
                arreglo[j + 1] = arreglo[j];
                arreglo[j] = auxiliar;
            }
        }
    }

    cout<<"Arreglo ordenado:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arreglo[i];
        if (i != 9)
            cout<<", ";
    }
}
