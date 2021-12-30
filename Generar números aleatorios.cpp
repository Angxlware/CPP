//Programa que genera un número al azar.
#include<iostream>//Librería principal.
#include<stdlib.h>//Función srand/rand.
#include<time.h>//Función time.

using namespace std;

int main()
{
    int n;
    srand(time(NULL));//Función para generar el número aleatorio.
    n=1+rand()%(101-1);//Variable=Límite_inferior+rand()%(Límite_superior+1-Límite_inferior)
    cout<<"El numero generado al azar es: "<<n;
    return 0;
}
