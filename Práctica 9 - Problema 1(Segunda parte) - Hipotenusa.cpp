/* Programa que determine la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus catetos */
#include<iostream>
#include<cmath>

using namespace std;

float cat1,cat2,hip;

int main()
{
    cout<<"Digite el valor del primer cateto:\n";
    cin>>cat1;
    cout<<"Digite el valor del segundo cateto:\n";
    cin>>cat2;
    hip=sqrt((cat1*cat1)+(cat2*cat2));
    cout<<"El valor de la hipotenusa del triangulo es: "<<hip;
    return 0;
}
