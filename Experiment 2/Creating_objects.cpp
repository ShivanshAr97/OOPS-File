#include <iostream>

using namespace std;

class student{
    public:
    string name;
    int enrollment_no;
    int age;
    string batch;

    void enter(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter enrollment no.: ";
        cin>>enrollment_no;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter batch: ";
        cin>>batch;
    }

    void display(){
        cout<<"\nName: "<<name<<endl;
        cout<<"Enrollment no.: "<<enrollment_no<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Batch: "<<batch<<endl;
    }
};

int main()
{
    student s;
    s.enter();
    s.display();  
    return 0;
}