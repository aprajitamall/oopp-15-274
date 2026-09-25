#include <iostream>
using namespace std;

class Area
{
public:

    // Area of Circle
    double area(double radius)
    {
        return 3.14159 * radius * radius;
    }

    // Area of Rectangle
    double area(double length, double width)
    {
        return length * width;
    }

    // Area of Square
    int area(int side)
    {
        return side * side;
    }

    // Area of Triangle
    double area(double base, double height, bool triangle)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Area a;

    double radius = 5;
    double length = 10;
    double width = 6;
    int side = 4;
    double base = 8;
    double height = 5;

    cout << "Area of Circle = "
         << a.area(radius) << endl;

    cout << "Area of Rectangle = "
         << a.area(length, width) << endl;

    cout << "Area of Square = "
         << a.area(side) << endl;

    cout << "Area of Triangle = "
         << a.area(base, height, true) << endl;

    return 0;
}