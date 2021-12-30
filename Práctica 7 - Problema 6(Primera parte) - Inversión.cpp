/* Programa que suponga que un individuo desea invertir su capital en un banco y desea
saber cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual */
#include<iostream>

using namespace std;

float inv,pm;

int main()
{
    cout<<"Digite el valor de la inversion:\n";
    cin>>inv;
    pm=inv+(inv*.02);
    cout<<"El deposito mensual del banco sera de: "<<pm;
    return 0;
}
