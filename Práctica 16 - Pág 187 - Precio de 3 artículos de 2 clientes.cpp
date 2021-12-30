#include<iostream>

using namespace std;

int main()
{
    float p1=0,p2=0,p3=0,pt,pv=0,pv2;
    int n;
    cout<<"********************************************************************************";
    cout<<"                     Autor: Angel Mauricio Romero Lopez                         ";
    cout<<"********************************************************************************";
    for(n=1;n<=2;n++)
    {
        cout<<"\nPrecio del articulo: $ ";
        cin>>p1;
        cout<<"\nPrecio del articulo: $ ";
        cin>>p2;
        cout<<"\nPrecio del articulo: $ ";
        cin>>p3;
        if(n<=1)
        {
        pv2=p1+p2+p3;
        }
        pv=pv+p1+p2+p3;
        cout<<"\n       Pago del cliente: "<<pv<<"\n";
    }
        pt=pv+pv2;
        cout<<"\nVENTAS TOTALES: $ "<<pt;
    return 0;
}
