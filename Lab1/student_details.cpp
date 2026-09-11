#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[2];
    int roll[2];
    string branch[2];

    
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter details of Student " << i + 1 << endl;

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Roll Number: ";
        cin >> roll[i];

        cout << "Enter Branch: ";
        cin >> branch[i];

        cout << endl;
    }

    
    cout << "\n----- Student Details -----\n";

    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name   : " << name[i] << endl;
        cout << "Roll   : " << roll[i] << endl;
        cout << "Branch : " << branch[i] << endl;
    }

    return 0;
}