#include <iostream>

using namespace std;

int main()
{
    int espacios;
    char* ptr;

    cout<<"Cuantos espacios de memoria ocupas?"<<endl;
    cin>>espacios;

    ptr = (char*) malloc(espacios * sizeof(char));
    if (ptr == NULL)
    {
        cout<<"Error al asignar memoria"<<endl;
        exit(0);
    }

    cout<<"Ingresa "<<espacios<<" caracteres:"<<endl;
    cin>>ptr;

    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr + sizeof(char)<<endl;
    cout<<&ptr + sizeof(char)<<endl;

    free(ptr);
    cout<<"Memoria liberada"<<endl;

    return 0;
}
