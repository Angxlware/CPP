#include<iostream>//Librería principal.
#include<windows.h>//Función Sleep/system.
#include<conio.h>//Función getch().

using namespace std;

int main()
{
    int h=0,h2=0,m=0,m2=0,s=0,s2=0;//h,h2=Hora m,m2=Minuto s,s2=Segundo
    while(1)//Ciclo infinito.
    {
        if(s2>=10)
        {
            s2=0;
            s++;
        if(s>=6)
        {
            s=0;
            m2++;
        if(m2>=10)
        {
            m2=0;
            m++;
        if(m>=6)
        {
            m=0;
            h2++;
        if(h2>=10)
        {
            h2=0;
            h++;
        }
        }
        }
        }
        }
        system("cls");//Limpiar pantalla.
        cout<<"Reloj Digital en C++"<<endl;//Reloj infinito.
        cout<<"----------------------"<<endl;
        cout<<h<<h2<<":"<<m<<m2<<":"<<s<<s2<<endl;
        cout<<"----------------------"<<endl;
        cout<<"Hora: "<<h<<h2<<endl;
        cout<<"Minuto: "<<m<<m2<<endl;
        cout<<"Segundo: "<<s<<s2<<endl;
        Sleep(1000);//Cada 1000 milisegundos aumenta un segundo.
        s2++;//Aumento del segundo.
    }
    getch();
}
