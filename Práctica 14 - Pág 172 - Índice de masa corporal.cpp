#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float peso,est,imc;
    cout<<"Peso de la persona: ";
    cin>>peso;
    cout<<"Estatura de la persona: ";
    cin>>est;
    imc=peso/(est*est);
    cout<<"El IMC es de: "<<imc;
    return 0;
}
