#include <iostream>

using namespace std;

class shape{
    public:
    string name;
    int sides;
    shape(string name, int sides){
        this->name = name;
        this->sides = sides;
    }
};

class triangle:public shape{
    private:
    int base;
    int height;

    public:
    triangle(string name, int sides, int base, int height):shape(name, sides){
        this->base = base;
        this->height = height;
    }
    void area(){
        cout<<"Area of triangle is: "<<(0.5*base*height);
    }
    void details(){
        cout<<"\nShape: "<<name<<"\n";
        cout<<"Sides: "<<sides<<"\n";
        cout<<"Base: "<<base<<"\n";
        cout<<"Height: "<<height<<"\n";
        area();
    }
};

class square:public shape{
    private:
    int height;
    public:
    square(string name, int sides, int height):shape(name, sides){
        this->height = height;
    }
    void area(){
        cout<<"Area of square: "<<(height*height);
    }
    void details(){
        cout<<"\nShape: "<<name<<"\n";
        cout<<"Sides: "<<sides<<"\n";
        cout<<"Height: "<<height<<"\n";
        area();
    }
};

int main()
{
    triangle t("Triangle", 3, 2, 4);
    square s("Square", 4, 4);

    t.details();
    cout<<"\n";

    s.details();

    return 0;
}