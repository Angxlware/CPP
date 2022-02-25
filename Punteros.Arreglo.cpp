#include <iostream>

using namespace std;

int main()
{
    int notas[5] = {5, 9, 8, 7, 8};
    int *punteroNotas;

    punteroNotas = notas;

    cout << "< Valores del arreglo >" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *punteroNotas << " ";
        punteroNotas++;
    }

    return 0;
}