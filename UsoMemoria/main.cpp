#include <iostream>

using namespace std;

int main()
{
    string nombre = "Ángel Mauricio Romero López";
    string* ptr;

    ptr = &nombre;

    cout<<ptr<<endl;
    cout<<nombre<<endl;

    return 0;
}
