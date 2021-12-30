/* Programa que lea un valor en dólares y la convierta a pesos */
#include<iostream>

using namespace std;

float dolar,pesos,cant_dol;

int main()
{
    cout<<"Digite el valor de un dolar en pesos mexicanos:\n";
    cin>>dolar;
    cout<<"Digite la cantidad de dolares que desea convertir a pesos:\n";
    cin>>cant_dol;
    pesos=dolar*cant_dol;
    cout<<"La cantidad total en pesos sera de: "<<pesos;
    return 0;
}
