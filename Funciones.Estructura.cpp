#include <iostream>

using namespace std;

struct alumno
{
	char nombre[21];
	int materias;
} nuevoAlumno;

// Prototipo de la función.
void pedirDatos();
void imprimirDatos(alumno nuevoAlumno);

int main()
{

	pedirDatos();
	imprimirDatos(nuevoAlumno);

	return 0;
}

// Definición de la función.
void pedirDatos()
{
	cout << "< Registro del alumno >" << endl;
	cout << "Ingrese el nombre del alumno: " << endl;
	cin.getline(nuevoAlumno.nombre, 21);

	cout << "Ingrese el numero de materias: " << endl;
	cin >> nuevoAlumno.materias;
}

void imprimirDatos(alumno nuevoAlumno)
{
	cout << endl;
	cout << "< Datos del alumno >" << endl;
	cout << "Nombre del alumno: " << nuevoAlumno.nombre << endl;
	cout << "Materias del alumno: " << nuevoAlumno.materias << endl;
}