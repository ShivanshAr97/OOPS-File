#include <iostream>
using namespace std;

namespace first
{
    void add(int x, int y)
    {
        cout << "\nAddition using first namespace add function" << endl;
        cout << x << " + " << y << " = " << x + y << endl;
    }
}
namespace second
{
    void sub(int x, int y)
    {
        cout << "\nSubtraction using second namespace sub function" << endl;
        cout << x << " - " << y << " = " << x - y << endl;
    }
}

int main()
{
    first::add(5, 3);
    second::sub(5, 3);
}