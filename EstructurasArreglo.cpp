#include <iostream>

using namespace std;

struct empleado
{
    int numeroTelefonico;
    char rfc[14], nombre[21], apellido[21];
};

struct fecha
{
    int dia, mes, ano;
};

struct registro
{
    empleado persona;
    fecha cumpleanos;
};

int main()
{
    registro registros[3];

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);

        cout << "< Registro #" << (i + 1) << " >" << endl;
        cout << "Ingrese el RFC del empleado: " << endl;
        cin >> registros[i].persona.rfc;

        cout << "Ingrese el nombre del empleado: " << endl;
        cin.ignore();
        cin.getline(registros[i].persona.nombre, 21);

        cout << "Ingrese los apellidos del empleado: " << endl;
        cin.getline(registros[i].persona.apellido, 21);

        cout << "Ingrese el numero telefonico del empleado: " << endl;
        cin >> registros[i].persona.numeroTelefonico;

        cout << "Ingrese la fecha de nacimiento (DD MM YYYY): " << endl;
        cin >> registros[i].cumpleanos.dia >> registros[i].cumpleanos.mes >>
            registros[i].cumpleanos.ano;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "< Datos del empleado #" << (i + 1) << " >" << endl;
        cout << "ID: " << registros[i].persona.rfc << endl;
        cout << "Nombre(s): " << registros[i].persona.nombre << endl;
        cout << "Apellidos: " << registros[i].persona.apellido << endl;
        cout << "Telefono: " << registros[i].persona.numeroTelefonico << endl;
        cout << "Fecha de nacimiento: " << registros[i].cumpleanos.dia << "/"
             << registros[i].cumpleanos.mes << "/" << registros[i].cumpleanos.ano << endl;
    }

    return 0;
}
