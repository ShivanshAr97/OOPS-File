#include <iostream>

using namespace std;

class Date{
    int Day,Month,Year;
    public:
    Date(){
        cout<<"Details of the employee: "<<endl;
    }
    Date(int d, int m, int y){
        Day = d;
        Month = m;
        Year = y;
    }
    void Display(){
        cout<<"Day: "<<Day<<endl;
        cout<<"Month: "<<Month<<endl;
        cout<<"Year: "<<Year<<endl;

    }
};

class Employee{
    int Id;
    int BasicSal;
    Date Bdate;
    public:
    Employee(int i, int sal, int d, int m, int y){
        Id = i;
        BasicSal = sal;
        Bdate = Date(d,m,y);
    }
    void Display(){
        cout<<"Id: "<<Id<<endl;
        cout<<"Salary: "<<BasicSal<<endl;
        Bdate.Display();
    }
};

int main()
{
    Employee e(110017, 200000, 22, 12, 1996);
    e.Display();
    return 0;
}