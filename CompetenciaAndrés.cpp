#include<iostream>

using namespace std;

int fichasRojas,fichasAzules,fichasAmarillas,puntajeAndres;

int main(){
    cout<<"En un juego el ganador obtiene una ficha roja, el segundo una ficha azul, y el tercero una amarilla. Al final todas las rondas el puntaje se calcula de la siguiente manera:"<<endl<<"El cubo de las fichas rojs m�s el doble de las fichas azules menos el cuadrado de las fichas amarillas.";
    cout<<endl<<"Para calcular el puntaje de Andr�s, digite el n�mero de veces que qued� en cada lugar:"<<endl;
    cout<<"�Cu�ntas veces qued� Andr�s en primer lugar?"<<endl;
    cin>>fichasRojas;
    cout<<"�Cu�ntas veces qued� Andr�s en segundo lugar?"<<endl;
    cin>>fichasAzules;
    cout<<"�Cu�ntas veces qued� Andr�s en tercer lugar?"<<endl;
    cin>>fichasAmarillas;
    puntajeAndres=(fichasRojas^3)+(fichasAzules*2)-(fichasAmarillas^2);
    cout<<endl<<"El puntaje de Andr�s fue de: "<<puntajeAndres;
    return 0;
}
