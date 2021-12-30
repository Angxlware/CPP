/* Programa donde un alumno desea saber cuál será su calificación final en la materia Algoritmos.
Dicha calificación se compone por los siguientes porcentajes:
55% Promedio de los parciales.
30% Examen final.
15% Trabajo Final. */
#include<iostream>
#include<stdio.h>

using namespace std;

float Prom,ExF,PFM;
char nombre[30];
int TF;

int main()
{
    cout<<"Digite el nombre del alumno:\n";
    cin>>nombre;
    cout<<"Digite el promedio de los tres parciales del alumno "<<nombre<<":\n";
    cin>>Prom;
    cout<<"Digite la calificacion del examen final del alumno "<<nombre<<":\n";
    cin>>ExF;
    cout<<"Digite la calificacion del trabajo final del alumno "<<nombre<<":\n";
    cin>>TF;
    PFM=(Prom*.55)+(ExF*.30)+(TF*.15);
    cout<<"La calificacion final en la materia Algoritmos del alumno "<<nombre<<" es: "<<PFM;
}
