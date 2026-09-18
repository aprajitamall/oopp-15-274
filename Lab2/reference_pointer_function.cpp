#include <iostream>
using namespace std;

void updateByReference(float &salary)
{
    salary = salary + (salary * 10 / 100);
}

void updateByPointer(float *salary)
{
    *salary = *salary + (*salary * 10 / 100);
}

int main()
{
    float salary1 = 50000;
    float salary2 = 50000;

    updateByReference(salary1);
    updateByPointer(&salary2);

    cout << "Salary after reference update: " << salary1 << endl;
    cout << "Salary after pointer update: " << salary2 << endl;

    return 0;
}