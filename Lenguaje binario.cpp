/* Programa que lea un número y
lo convierta a lenguaje binario */
#include<iostream>//Librería principal.
#include<string>//Función string.

using namespace std;

int main()
{
    cout<<"Digite el numero que desea convertir a lenguaje binario:\n";
    int num;
    string cad="";//Cadena de caracteres.
    cin>>num;
    if(num>0)
        {
        while(num>0)//Procedimiento para calcular el binario.
        {
           if(num%2==0)
                cad="0"+cad;
            else
                cad="1"+cad;
                num=num/2;
        }
        cout<<"El numero en binario es: "<<cad;
    }
    else
    {
        if(num=0)
            cout<<"0";
        else
            cout<<"Digite solo numeros mayores a 0";
    }
    return 0;
}
