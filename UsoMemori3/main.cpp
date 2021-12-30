#include <iostream>
#define valores 100

using namespace std;

int main()
{
    int* ptr, numBuscado, contador = 0;

    ptr = (int*) malloc(100 * sizeof(int));
    if (!ptr)
    {
        cout<<"Error al reservar memoria"<<endl;
        exit(1);
    }

    cout<<"Uso de Memoria #3"<<endl;
    for (int i = 0; i < valores; i++)
    {
        ptr[i] = rand() % 100 + 1;
    }

    cout<<"Valores generados: "<<endl;
    for (int i = 0; i < valores; i++)
    {
        cout<<"ptr["<<i<<"]: "<<ptr[i]<<endl;
    }

    cout<<"Ingrese el numero que desea buscar (Rango del 1 al 100): ";
    cin>>numBuscado;
    for (int i = 0; i < valores; i++)
    {
        if (ptr[i] == numBuscado)
        {
            cout<<"Valor en la posicion #"<<i
            <<". Direccion: "<<&ptr[i]<<endl;
            contador++;
        }
    }
    if (contador == 0)
        cout<<"Ese valor no se encuentra en el puntero"<<endl;

    free(ptr);
    return 0;
}
