#include<iostream>
using namespace std;
#include<exception>
class myexception:public exception{
    public:
    const char* what() const throw(){
        return "Division by zero is not possible!\n";
    }
};
int main(){
    try{
        float x,y;
        cout<<"Enter two numbers X and Y:\n";
        cin>>x>>y;
        if (y==0)
        {
            myexception Z;
            throw Z;
        }
        else
        {
            cout<<x<<" / "<<y<<" is: "<<x/y<<endl;
        }
    }
    catch(myexception e){
            cout<<e.what();
    }
}