#include <iostream>

using namespace std;

template <class T>
T square (T x){
    T result;
    result = x*x;
    return result;
};

int main()
{
    int i = 2;
    float f = 1.1;
    double d = 3.5643;
    cout<<"Square of "<<i<<" is: "<<square <int> (i)<<endl;
    cout<<"Square of "<<f<<" is: "<<square <float> (f)<<endl;
    cout<<"Square of "<<d<<" is: "<<square (d)<<endl;
    return 0;
}