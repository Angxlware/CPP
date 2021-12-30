/* Programa que realice la sumatoria de los números comprendidos del 1 al 10 */
#include<iostream>

using namespace std;

int n,suma=0;

int main()
{
    for(n=1;n<=10;n++)
    {
        suma=suma+n;
    }
    cout<<"La sumatoria de los numeros del 1 al 10 es: "<<suma;
}
