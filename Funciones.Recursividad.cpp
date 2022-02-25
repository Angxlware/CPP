#include <iostream>

using namespace std;

// Prototipo de la funcion.
int calcularFactorial(int numero);

int main()
{
	int numero, numeroFactorial;

	cout << "< Numero del que se desea su factorial >" << endl;
	cout << "Ingrese el numero para saber su factorial: " << endl;
	cin >> numero;

	numeroFactorial = calcularFactorial(numero);

	cout << "< Factorial del numero >" << endl;
	cout << "El factorial de " << numero << " es: " << numeroFactorial << endl;

	return 0;
}

// Definición de la funcion.
int calcularFactorial(int numero)
{
	if (numero < 0)
	{
		return -1;
	}
	else if (numero > 0)
	{
		return numero * calcularFactorial(numero - 1);
	}
	return 1;
}