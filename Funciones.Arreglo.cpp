#include <iostream>

using namespace std;

// Prototipo de la funcion.
void imprimirArreglo(int arreglo[], int tamano);
void elevarAlCubo(int arreglo[], int tamano);

int main()
{
	int arreglo[5] = {2, 4, 6, 3, 7};

	cout << "< Arreglo original >" << endl;
	imprimirArreglo(arreglo, 5);

	elevarAlCubo(arreglo, 5);

	cout << endl;
	cout << "< Arreglo elevado >" << endl;
	imprimirArreglo(arreglo, 5);

	return 0;
}

// Definición de la funcion.
void imprimirArreglo(int arreglo[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		cout << "Arreglo[" << i << "]: " << arreglo[i] << endl;
	}
}

void elevarAlCubo(int arreglo[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		arreglo[i] = arreglo[i] * arreglo[i] * arreglo[i];
	}
}
