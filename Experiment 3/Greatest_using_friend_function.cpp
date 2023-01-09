#include <iostream>

using namespace std;

class tempSecond;
class tempFirst{
    int x;
    public:
    void setData(){
        cout<<"\nFirst no.: ";
        cin>>x;
    }
    friend void greatest(tempFirst, tempSecond);
};

class tempSecond{
    int y;
    public:
    void setData(){
        cout<<"Second no.: ";
        cin>>y;
    }
    friend void greatest(tempFirst, tempSecond);
};

void greatest(tempFirst first, tempSecond second){
    if (first.x>second.y)
    {
        cout<<endl<<first.x<<" is greater than "<<second.y;
    }
    else{
        cout<<endl<<first.x<<" is smaller than "<<second.y;
    }
}

int main()
{
    tempFirst first;
    tempSecond second;
    first.setData();
    second.setData();
    greatest(first, second);
    return 0;
}