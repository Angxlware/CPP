/* Programa que suponga que un individuo desea invertir su capital en un banco y desea
saber cu�nto dinero ganar� despu�s de un mes si el banco paga a raz�n de 2% mensual */
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
