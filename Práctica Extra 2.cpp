#include<iostream>//Programa que haga 4 funciones

using namespace std;

int main()
{
    float b,a,ar,pago,pago_t,r,p;
    int e1,e2,e3,prome;
    char x;
    cout<<"1 - Calcular el area de un triangulo\n2 - Calcular el promedio de las edades de tres personas\n3 - Calcular el pago de un cliente con descuento del 25%\n4 - Calcular el perimetro de un circulo";
    x='s';
    while((x=='s')||(x=='S'))
    {
    cout<<"\nIngrese la funcion que desea usar: ";
    int func=0;
    cin>>func;
    if(func>4)//Funci�n incorrecta
    {
        cout<<"\n********************************************************************************";
        cout<<"                               Funcion incorrecta                               ";
        cout<<"********************************************************************************";
    }
    switch(func)
    {
case 1://�rea de un tri�ngulo
        cout<<"\n********************************************************************************";
        cout<<"                              Area de un triangulo                              ";
        cout<<"********************************************************************************";
        cout<<"\nIngrese la base del triangulo: ";
        cin>>b;
        cout<<"Ingrese la altura del triangulo: ";
        cin>>a;
        ar=(b*a)/2;
        cout<<"El area del triangulo es: "<<ar;
        cout<<"\n";
        cout<<"\n********************************************************************************";
        cout<<"\nIngrese 'S' si desea realizar otra funcion, de lo contrario ingrese 'N': ";
        cin>>x;
break;
case 2://Promedio de 3 edades
        cout<<"\n********************************************************************************";
        cout<<"                              Promedio de 3 edades                              ";
        cout<<"********************************************************************************";
        cout<<"\nIngrese la primera edad: ";
        cin>>e1;
        cout<<"Ingrese la segunda edad: ";
        cin>>e2;
        cout<<"Ingrese la tercera edad: ";
        cin>>e3;
        prome=(e1+e2+e3)/3;
        cout<<"El promedio de las edades es: "<<prome;
        cout<<"\n";
        cout<<"\n********************************************************************************";
        cout<<"\nIngrese 'S' si desea realizar otra funcion, de lo contrario ingrese 'N': ";
        cin>>x;
break;
case 3://Compra con un descuento del 25%
        cout<<"\n********************************************************************************";
        cout<<"                         Compra con un descuento del 25%                        ";
        cout<<"********************************************************************************";
        cout<<"\nIngrese el pago de la compra: ";
        cin>>pago;
        pago_t=pago-(pago*.25);
        cout<<"El total a pagar es de: "<<pago_t;
        cout<<"\n";
        cout<<"\n********************************************************************************";
        cout<<"\nIngrese 'S' si desea realizar otra funcion, de lo contrario ingrese 'N': ";
        cin>>x;
break;
case 4://Per�metro de un circulo
    #define pi 3.1416
        cout<<"\n********************************************************************************";
        cout<<"                            Perimetro de un circulo                             ";
        cout<<"********************************************************************************";
        cout<<"\nIngrese el radio del circulo: ";
        cin>>r;
        p=2*pi*r;
        cout<<"El perimetro del circulo es de: "<<p;
        cout<<"\n";
        cout<<"\n********************************************************************************";
        cout<<"\nIngrese 'S' si desea realizar otra funcion, de lo contrario ingrese 'N': ";
        cin>>x;
break;
    }
    }
        if((x=='n')||(x=='N'))//Fin del programa
    {
        cout<<"\n********************************************************************************";
        cout<<"                                FIN DEL PROGRAMA                                ";
        cout<<"********************************************************************************";
    }
        else//Opci�n incorrecta si la respuesta no es "S" o "N"
        {
        cout<<"\n********************************************************************************";
        cout<<"                            ERROR: Opcion incorrecta                            ";
        cout<<"********************************************************************************";
        }
        return 0;
}
