#include <iostream>
using namespace std;

class Calculator
{
public:

    inline int square(int n)
    {
        return n * n;
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

    
    int subtract(int a, int b)
    {
        return a - b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }
};

int main()
{
    Calculator c;

    cout << "Square of 5 = " << c.square(5) << endl;

    cout << "Addition of 20 and 10 = "
         << c.add(20, 10) << endl;

    cout << "Addition of 20 using default argument = "
         << c.add(20) << endl;

    cout << "Multiplication of 5 and 4 = "
         << c.multiply(5, 4) << endl;

    cout << "Multiplication of 2.5 and 4.0 = "
         << c.multiply(2.5, 4.0) << endl;

    cout << "Subtraction of 20 and 5 = "
         << c.subtract(20, 5) << endl;

    cout << "Subtraction of 10.5 and 2.5 = "
         << c.subtract(10.5, 2.5) << endl;

    return 0;
}