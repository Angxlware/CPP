#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float p1,p2,p3,pago,iva,pago_total;
    char nombre[30];
    cout<<"Nombre del cliente: ";
    cin>>nombre;
    cout<<"Precio 1: $ ";
    cin>>p1;
    cout<<"Precio 2: $ ";
    cin>>p2;
    cout<<"Precio 3: $ ";
    cin>>p3;
    pago=p1+p2+p3;
    iva=pago*.16;
    pago_total=pago+iva;
    cout<<nombre<<" realizo el pago de: $ "<<pago<<" y de IVA fue: $ "<<iva;
    cout<<"\nPago finalmente un total de: $ "<<pago_total;
}
