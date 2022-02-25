#include <iostream>

using namespace std;

struct gato
{
    char nombre[21];
    int edad;
    char color[11];
};

int main()
{
    gato miGato;

    cout << "< Datos del gato >" << endl;
    cout << "Ingrese el nombre del gato: " << endl;
    cin >> miGato.nombre;

    cout << "Ingrese la edad del gato: " << endl;
    cin >> miGato.edad;

    cout << "Ingrese el color del gato: " << endl;
    cin >> miGato.color;

    cout << endl;
    cout << "< Datos del gato >" << endl;
    cout << "Nombre: " << miGato.nombre << endl;
    cout << "Edad: " << miGato.edad << endl;
    cout << "Color: " << miGato.color << endl;

    return 0;
}