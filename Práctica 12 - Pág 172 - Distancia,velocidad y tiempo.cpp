#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float dis,vel,tiem;
    cout<<"Distancia: ";
    cin>>dis;
    cout<<"Tiempo: ";
    cin>>tiem;
    vel=dis/tiem;
    cout<<"VELOCIDAD: "<<vel<< "Km/h";
    return 0;
}
