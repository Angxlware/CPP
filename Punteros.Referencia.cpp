#include <iostream>

using namespace std;

void cambiarValores(int *a, int *b);

int main()
{
	int a = 10, b = 5;

	cout << "1. " << a << " - " << b << endl;

	cambiarValores(&a, &b);

	cout << "4. " << a << " - " << b << endl;

	return 0;
}

void cambiarValores(int *a, int *b)
{
	cout << "2. " << *a << " - " << *b << endl;
	int aux = *a;
	*a = *b;
	*b = aux;
	cout << "3. " << *a << " - " << *b << endl;
}