/* Programa que lea una cantidad depositada en un banco y que calcule la cantidad final despu�s de 20% de inter�s */
#include<iostream>

using namespace std;

int cd,ct;

int main()
{
    cout<<"Digite la cantidad a depositar:\n";
    cin>>cd;
    ct=cd-(cd*.20);
    cout<<"La cantidad total depositada sera de: "<<ct;
    return 0;
}
