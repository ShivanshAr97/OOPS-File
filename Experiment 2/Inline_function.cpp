#include <iostream>

using namespace std;

inline float mult(float a, float b){
    return a*b;
}

inline float divi(float a, float b){
    return a/b;
}

int main()
{
    float x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Product of the numbers: "<<mult(x,y);
    cout<<"\nDivision of the numbers: "<<divi(x,y);
    return 0;
}