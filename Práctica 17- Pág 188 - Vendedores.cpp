#include<iostream>

using namespace std;

int main()
{
    float sb,vs1,vs2,tvs=0,com=0,st=0;
    int n,v;
    cout<<"Cuantos vendedores se van a considerar? ";
    cin>>v;
    for(n=1;n<=v;n++)
    {
        cout<<"\n\nSalario base: ";
        cin>>sb;
        cout<<"\nVenta semana: $ ";
        cin>>vs1;
        cout<<"\nVenta semana: $ ";
        cin>>vs2;
        tvs=tvs+vs1+vs2;
        cout<<"\nVentas de la semana:       $ "<<tvs;
        com=tvs*.10;
        cout<<"\nComisiones del vendedor:   $ "<<com;
        st=com+sb;
        cout<<"\nSueldo total del vendedor: $ "<<st;
    }
}
