#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;

public:

   
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Branch: ";
        cin >> branch;
    }

   
    void display()
    {
        cout << "Name   : " << name << endl;
        cout << "Roll   : " << roll << endl;
        cout << "Branch : " << branch << endl;
    }
};

int main()
{

    Student s1, s2;

    cout << "Enter details of Student 1\n";
    s1.input();

    cout << "\nEnter details of Student 2\n";
    s2.input();

    cout << "\n----- Student 1 Details -----";
    s1.display();

    cout << "\n----- Student 2 Details -----";
    s2.display();

    return 0;
}