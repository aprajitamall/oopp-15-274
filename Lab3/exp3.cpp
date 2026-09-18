#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int add(int a, int b = 10)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << "Square of 5 = " << square(5) << endl;

    cout << "Addition (Default Argument): " << add(20) << endl;
    cout << "Addition: " << add(20, 15) << endl;

    cout << "Multiply Integers: " << multiply(4, 5) << endl;
    cout << "Multiply Doubles: " << multiply(4.5, 2.5) << endl;

    return 0;
}