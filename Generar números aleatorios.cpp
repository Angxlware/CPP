//Programa que genera un n�mero al azar.
#include<iostream>//Librer�a principal.
#include<stdlib.h>//Funci�n srand/rand.
#include<time.h>//Funci�n time.

using namespace std;

int main()
{
    int n;
    srand(time(NULL));//Funci�n para generar el n�mero aleatorio.
    n=1+rand()%(101-1);//Variable=L�mite_inferior+rand()%(L�mite_superior+1-L�mite_inferior)
    cout<<"El numero generado al azar es: "<<n;
    return 0;
}
