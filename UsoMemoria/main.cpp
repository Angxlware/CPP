#include <iostream>

using namespace std;

int main()
{
    string nombre = "�ngel Mauricio Romero L�pez";
    string* ptr;

    ptr = &nombre;

    cout<<ptr<<endl;
    cout<<nombre<<endl;

    return 0;
}
