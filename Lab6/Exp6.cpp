#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:

    Point() : x{0}, y{0}
    {
        cout << "Default Constructor Called" << endl;
    }
    Point(int a, int b) : x{a}, y{b}
    {
        cout << "Parameterized Constructor Called" << endl;
    }

    Point(Point &p) : x{p.x}, y{p.y}
    {
        cout << "Copy Constructor Called" << endl;
    }

    void show()
    {
        cout << "Point: (" << x << "," << y << ")" << endl;
    }
    ~Point()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Point p1;
    p1.show();

    Point p2{4,7};
    p2.show();

    Point p3{p2};
    p3.show();

    return 0;
}