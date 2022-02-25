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
    registro nuevoRegistro;

    cout << "< Registro del empleado >" << endl;
    cout << "Ingrese el RFC del empleado: " << endl;
    cin >> nuevoRegistro.persona.rfc;

    cout << "Ingrese el nombre del empleado: " << endl;
    cin.ignore();
    cin.getline(nuevoRegistro.persona.nombre, 21);

    cout << "Ingrese los apellidos del empleado:" << endl;
    cin.getline(nuevoRegistro.persona.apellido, 21);

    cout << "Ingrese el numero telefonico del empleado: " << endl;
    cin >> nuevoRegistro.persona.numeroTelefonico;

    cout << "Ingrese la fecha de nacimiento (DD MM YYYY): " << endl;
    cin >> nuevoRegistro.cumpleanos.dia >> nuevoRegistro.cumpleanos.mes >>
        nuevoRegistro.cumpleanos.ano;

    cout << endl;
    cout << "< Datos del empleado >" << endl;
    cout << "ID: " << nuevoRegistro.persona.rfc << endl;
    cout << "Nombre(s): " << nuevoRegistro.persona.nombre << endl;
    cout << "Apellidos: " << nuevoRegistro.persona.apellido << endl;
    cout << "Telefono: " << nuevoRegistro.persona.numeroTelefonico << endl;
    cout << "Fecha de nacimiento: " << nuevoRegistro.cumpleanos.dia << "/"
         << nuevoRegistro.cumpleanos.mes << "/" << nuevoRegistro.cumpleanos.ano << endl;

    return 0;
}
