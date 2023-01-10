#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void read(string fname)
{
    char line[100];
    ifstream fin;
    fin.open(fname);
    while (fin)
    {
        fin.getline(line, 100);
        cout << line;
    }
    fin.close();
    cout << "\nFile read!";
}
void write(string fname, string name, int age, string gender, int height, int weight)
{
    ofstream fout;
    fout.open(fname);
    fout << "Name: " << name;
    fout << "  Age: " << age;
    fout << "  Gender: " << gender;
    fout << "  Height: " << height;
    fout << "  Weight: " << weight;
    fout.close();
    cout << "\nFile written!\n";
}
int main()
{
    string name, gender;
    string fname = "student";
    cout << "Enter the name of student: ";
    cin >> name;
    cout << "Enter the gender: ";
    cin >> gender;
    int age, height, weight;
    cout << "Enter the age of the student: ";
    cin >> age;
    cout << "Enter the height of the student: ";
    cin >> height;
    cout << "Enter the weight of the student: ";
    cin >> weight;
    write(fname, name, age, gender, height, weight);
    read(fname);
    return 0;
}