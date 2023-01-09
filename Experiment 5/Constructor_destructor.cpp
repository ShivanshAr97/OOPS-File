#include <iostream>

using namespace std;

class bigger
{
    int x, y;

public:
    bigger(int a, int b)
    {
        x = a;
        y = b;
        cout << "Constructor created" << endl;
    }
    bigger(bigger &ref)
    {
        x = ref.x;
        y = ref.y;
    }
    ~bigger()
    {
        cout << "Constructor destroyed" << endl;
    }
    friend void biggestNumber(bigger c);
};

void biggestNumber(bigger c)
{
    if (c.x > c.y)
    {
        cout << c.x << " is greater than " << c.y << endl;
    }
    else
    {
        cout << c.x << " is smaller than " << c.y << endl;
    }
}

int main()
{
    bigger obj(5, 3);
    bigger obj2(obj);
    biggestNumber(obj2);
    return 0;
}