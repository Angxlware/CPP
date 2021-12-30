/* Programa que lea dos números y encontrar la suma del doble del primero más el cuadrado del segundo */
#include<iostream>

using namespace std;

int n1,n2,res;

int main()
{
    cout<<"Digite el primer numero:\n";
    cin>>n1;
    cout<<"Digite el segundo numero:\n";
    cin>>n2;
    res=(n1*2)+(n2*n2);
    cout<<"El resultado de la operacion es: "<<res;
    return 0;
}
