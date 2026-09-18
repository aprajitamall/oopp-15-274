#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

    static int count;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        count++;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }

    friend void showDetails(Student s);
};

int Student::count = 0;

void showDetails(Student s)
{
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
}

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    cout << "Student 1 Details:\n";
    showDetails(s1);

    cout << "Student 2 Details:\n";
    showDetails(s2);

    cout << endl;
    Student::showCount();

    return 0;
}