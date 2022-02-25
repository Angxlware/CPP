#include <iostream>

using namespace std;

// Prototipo de la funcion.
void pedirDatos();
void elevarAlCubo();

int numero = 0, numeroAlCubo = 1;

int main()
{
	pedirDatos();
	cout << endl;
	elevarAlCubo();

	return 0;
}

// Definición de la funcion.
void pedirDatos()
{
	cout << "< Numero a elevar al cubo >" << endl;
	cout << "Ingrese el numero que desea elevar al cubo: " << endl;
	cin >> numero;
}

void elevarAlCubo()
{
	for (int i = 0; i < 3; i++)
	{
		numeroAlCubo *= numero;
	}
	cout << "< Numero elevado al cubo >" << endl;
	cout << "El numero " << numero << " al cubo es: " << numeroAlCubo << endl;
}