#include <iostream>

using namespace std;

int main()
{
    int numAlumnos;

    cout << "Ingrese el numero de alumnos: " << endl;
    cin >> numAlumnos;

    int *alumnos = new int[numAlumnos];

    cout << "< Registro de los alumnos >" << endl;
    for (int i = 0; i < numAlumnos; i++)
    {
        cout << "Ingrese la edad del alumno #" << (i + 1) << ": " << endl;
        cin >> alumnos[i];
    }

    cout << endl;
    cout << "< Datos de los alumnos >" << endl;
    for (int i = 0; i < numAlumnos; i++)
    {
        cout << "Edad del alumno #" << (i + 1) << ": " << alumnos[i] << endl;
    }

    delete[] alumnos;

    return 0;
}