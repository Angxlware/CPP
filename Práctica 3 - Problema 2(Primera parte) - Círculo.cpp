/* Programa que calcule el �rea de un c�rculo de cualquier radio */
#include<iostream>
#define pi 3.1416

using namespace std;

float area,radio;

int main()
{
    cout<<"Digite el radio:\n";
    cin>>radio;
    area=pi*(radio*radio);
    cout<<"El area del circulo es: "<<area;
    return 0;
}
