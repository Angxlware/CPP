#include<iostream>

using namespace std;

int main()
{
    string cadena, subCadena;
    int apariciones = 0;

    cout<<"Ingrese la cadena: ";
    cin>>cadena;

    cout<<"Ingrese la subcadena a encontrar: ";
    cin>>subCadena;

    for (int i = 0; i <= cadena.size(); i++)
    {
        if (cadena.substr(i, subCadena.size()) == subCadena)
            apariciones++;
    }

    cout<<"La cadena "<<subCadena<<" se encuentra "
    <<apariciones<<" veces en " <<cadena;
}
