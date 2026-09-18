#include <bits/stdc++.h>
using namespace std;


void input(string &name, string &branch, string &roll_no,int marks[]) {
    getline(cin, name);
    getline(cin, branch);
    getline(cin, roll_no);
   
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];}
    
}

void findSum( int marks[],int &total_marks, double &percent) {

    for(int i = 0; i < 5; i++) {
    
        total_marks += marks[i];
    }
    
        percent = total_marks / 5.0;
    
}


void show(string name, string branch, string roll_no,int marks[],int total_marks, double percent) {
   
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Roll No: " << roll_no << endl;
    cout<<"Marks detail: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"subject"<<i+1<<":"<<marks[i]<<endl;
    }
    cout << "Total Marks: " << total_marks << endl;
    cout << "Percentage: " << percent << "%" << endl;
}

int main() {
    string name, branch, roll_no;
int marks[5];
int total_marks = 0;
double percent = 0.0;
input(name, branch, roll_no,marks);
findSum(marks,total_marks, percent);
show(name, branch, roll_no,marks ,total_marks, percent);
    return 0;
}



