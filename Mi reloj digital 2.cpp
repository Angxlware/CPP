#include<iostream>//Librería principal.
#include<windows.h>//Función Sleep/system.

using namespace std;

int main()
{
    int h,h2,m,m2,s,s2;//h,h2=Hora m,m2=Minuto s,s2=Segundo
    for(h=0;h<=2;h++)
{
    for(h2=0;h2<=4;h2++)
{
    for(m=0;m<=5;m++)
{
    for(m2=0;m2<=9;m2++)
{
    for(s=0;s<=5;s++)
{
    for(s2=0;s2<=9;s2++)
{
    cout<<"Reloj Digital en C++"<<endl;//Reloj con terminación en 24:00:00
    cout<<"--------------------"<<endl;
    cout<<h<<h2<<":"<<m<<m2<<":"<<s<<s2<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Hora: "<<h<<h2<<endl;
    cout<<"Minuto: "<<m<<m2<<endl;
    cout<<"Segundo: "<<s<<s2<<endl;
    Sleep(1000);//Cada 1000 milisegundos aumenta un segundo.
    if(h2==4)//Condición para pausar el fin del programa.
    {
        cout<<endl;
        system("PAUSE");//Fin del programa.
    }
    system("cls");//Limpiar pantalla.
}
}
}
}
}
}
}
