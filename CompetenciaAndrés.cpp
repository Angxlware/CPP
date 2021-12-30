#include<iostream>

using namespace std;

int fichasRojas,fichasAzules,fichasAmarillas,puntajeAndres;

int main(){
    cout<<"En un juego el ganador obtiene una ficha roja, el segundo una ficha azul, y el tercero una amarilla. Al final todas las rondas el puntaje se calcula de la siguiente manera:"<<endl<<"El cubo de las fichas rojs más el doble de las fichas azules menos el cuadrado de las fichas amarillas.";
    cout<<endl<<"Para calcular el puntaje de Andrés, digite el número de veces que quedó en cada lugar:"<<endl;
    cout<<"¿Cuántas veces quedó Andrés en primer lugar?"<<endl;
    cin>>fichasRojas;
    cout<<"¿Cuántas veces quedó Andrés en segundo lugar?"<<endl;
    cin>>fichasAzules;
    cout<<"¿Cuántas veces quedó Andrés en tercer lugar?"<<endl;
    cin>>fichasAmarillas;
    puntajeAndres=(fichasRojas^3)+(fichasAzules*2)-(fichasAmarillas^2);
    cout<<endl<<"El puntaje de Andrés fue de: "<<puntajeAndres;
    return 0;
}
