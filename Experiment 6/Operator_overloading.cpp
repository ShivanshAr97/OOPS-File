#include <iostream>
using namespace std;

class overload
{
    int a;
    int b;

public:
    overload(int x, int y)
    {
        a = x;
        b = y;
    }
    int get_a();
    int operator--();
    void operator!();
    friend int operator+(overload d1, overload d2);
};

int overload::get_a()
{
    return a;
}
int overload::operator--()
{
    a--;
}
void overload::operator!()
{
    a = !a;
}
int operator+(overload d1, overload d2)
{
    return d1.a + d2.a;
}

int main()
{
    overload test1(2, 3);
    overload test2(5, 6);
    cout << "Original Value of a is : " << test1.get_a() << endl;
    --test1;
    cout << "New value of a is : " << test1.get_a() << endl;
    cout << "-----------" << endl;
    cout << "Original Value of a is : " << test1.get_a() << endl;
    !test1;
    cout << "Value of a after not operation : " << test1.get_a() << endl;
    cout << test1.get_a() << " + " << test2.get_a() << " = " << test1 + test2 << endl;
    return 0;
}