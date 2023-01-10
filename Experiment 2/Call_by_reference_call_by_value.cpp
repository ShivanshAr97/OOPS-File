#include <iostream>

using namespace std;

void swap(int a, int b){
    int x = a;
    a=b;
    b=x;
}

void swap(int *a, int *b){
    int x = *a;
    *a=*b;
    *b=x;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers A and B: ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    swap(&a, &b);
    cout<<endl<<a<<" "<<b;
    return 0;
}