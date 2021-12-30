#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float vel,tiem,dis;
    cout<<"Velocidad: ";
    cin>>vel;
    cout<<"Tiempo: ";
    cin>>tiem;
    dis=vel*tiem;
    cout<<"Distancia de: "<<dis<<" Km";
    return 0;
}
