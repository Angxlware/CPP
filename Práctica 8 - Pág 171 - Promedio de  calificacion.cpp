#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char nombre[30],asignatura[30];
    float p1,p2,p3,prom;
    cout<<"Nombre del alumno: ";
    cin>>nombre;
    cout<<"Asignatura: ";
    cin>>asignatura;
    cout<<"Primer parcial: ";
    cin>>p1;
    cout<<"Segundo parcial: ";
    cin>>p2;
    cout<<"Tercer parcial: ";
    cin>>p3;
    prom=(p1+p2+p3)/3;
    cout<<nombre<<" OBTUVO UN PROMEDIO FINAL EN "<<asignatura<<" DE: "<<prom;
    return 0;
}
