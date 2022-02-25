#include <iostream>

using namespace std;

struct
{
	int ladoMayor;
	int ladoMenor;
} rectangulo1, rectangulo2;

int main()
{
	rectangulo1.ladoMayor = 7;
	rectangulo1.ladoMenor = 3;

	rectangulo2.ladoMayor = 50;
	rectangulo2.ladoMenor = 15;

	cout << "< Datos del rectangulo 1 >" << endl;
	cout << "Lado mayor: " << rectangulo1.ladoMayor << endl;
	cout << "Lado menor: " << rectangulo1.ladoMenor << endl;

	cout << "< Datos del rectangulo 2 >" << endl;
	cout << "Lado mayor: " << rectangulo2.ladoMayor << endl;
	cout << "Lado menor: " << rectangulo2.ladoMenor << endl;

	return 0;
}