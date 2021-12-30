/* Una tienda ofrece un descuento del 15% sobre el todal de la compra
y un cliente desea saber cuánto deberá pagar finalmente por su compra */
#include<iostream>

using namespace std;

float compra,total;

int main()
{
    cout<<"Digite el valor de la compra:\n";
    cin>>compra;
    total=compra-(compra*.15);
    cout<<"El total a pagar sera de: "<<total;
    return 0;
}
