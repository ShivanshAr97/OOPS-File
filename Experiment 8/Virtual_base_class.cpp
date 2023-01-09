#include <iostream>

using namespace std;

class StudentInfo{
    private:
    int roll_no;
    public:
    string name;
    void get_info(){
        cout<<"Enter name of student: ";
        cin>>name;
        cout<<"Enter roll no. of student: ";
        cin>>roll_no;
    }
    void display(){
        cout<<"Name of Student: "<<name<<endl;
        cout<<"Roll no. of Student: "<<roll_no<<endl;
    }
};

class Phone:virtual public StudentInfo{
    private:
    int phn_no;
    public:
    void get_no(){
        cout<<"Enter phone no. of the student: ";
        cin>>phn_no;
    }
    void display_1(){
        cout<<"Phone no. of the student: "<<phn_no<<endl;
    }
};

class Address:virtual public StudentInfo{
    private:
    string addr;
    public:
    void get_add(){
        cout<<"Enter address of the student: ";
        cin>>addr;
    }
    void display_2(){
        cout<<"Address of the student: "<<addr<<endl;
    }
};

class FullDetails:public Phone, public Address{
    private:
    string category;
    public:
    void get_category(){
        cout<<"Enter category of the student: ";
        cin>>category;
    }
    void display_3(){
        cout<<"Category of the student: "<<category;
    }
};

int main()
{
    FullDetails F1;
    F1.get_info();
    F1.get_no();
    F1.get_add();
    F1.get_category();
    cout<<"\nFull Details: "<<endl;
    F1.display();
    F1.display_1();
    F1.display_2();
    F1.display_3();
    return 0;
}