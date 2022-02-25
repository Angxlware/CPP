#include <iostream>

using namespace std;

// Prototipo de la funcion.
void elevarAlCubo(int matriz[][3], int filas, int columnas);
void imprimirMatriz(int matriz[][3], int filas, int columnas);

int main()
{
	const int filas = 3;
	const int columnas = 3;
	int matriz[filas][columnas] = {{2, 5, 3}, {5, 6, 8}, {3, 2, 1}};

	cout << "< Matriz original >" << endl;
	imprimirMatriz(matriz, filas, columnas);

	elevarAlCubo(matriz, filas, columnas);

	cout << "< Matriz elevada al cubo >" << endl;
	imprimirMatriz(matriz, filas, columnas);

	return 0;
}

// Definición de la funcion.
void elevarAlCubo(int matriz[][3], int filas, int columnas)
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			matriz[i][j] = matriz[i][j] * matriz[i][j] * matriz[i][j];
		}
	}
}

void imprimirMatriz(int matriz[][3], int filas, int columnas)
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "Matriz[" << i << "][" << j << "]: " << matriz[i][j] << endl;
		}
		cout << endl;
	}
}