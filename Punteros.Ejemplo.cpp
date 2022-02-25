#include <iostream>

using namespace std;

int main()
{
	int numero = 10, *puntero;

	puntero = &numero;

	cout << numero << endl;
	cout << &numero << endl;
	cout << *puntero << endl;
	cout << puntero << endl;

	return 0;
}
