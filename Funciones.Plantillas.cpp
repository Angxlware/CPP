#include <iostream>

using namespace std;

template <class tipoDato>
tipoDato calcularValorAbsoluto(tipoDato numero);

int main()
{
	int entero = -323;
	long largo = -838237237;
	float real = -3.1454;
	double realDoble = -0.232352;

	cout << calcularValorAbsoluto(entero) << endl;
	cout << calcularValorAbsoluto(largo) << endl;
	cout << calcularValorAbsoluto(real) << endl;
	cout << calcularValorAbsoluto(realDoble) << endl;

	return 0;
}

template <class tipoDato>
tipoDato calcularValorAbsoluto(tipoDato numero)
{
	return (numero < 0) ? -numero : numero;
}