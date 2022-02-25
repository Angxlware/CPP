#include <iostream>

using namespace std;

struct stEstructura
{
    int a, b;
} estructura, *punteroEstructura;

int main()
{
    estructura.a = 10;
    estructura.b = 20;

    punteroEstructura = &estructura;

    cout << "< Variable >" << endl;
    cout << estructura.a << endl;
    cout << estructura.b << endl;

    cout << endl;
    cout << "< Puntero >" << endl;
    cout << punteroEstructura->a << endl;
    cout << punteroEstructura->b << endl;

    return 0;
}
