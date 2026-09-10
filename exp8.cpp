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
    }

    Point(int a, int b) : x{a}, y{b}
    {
    }

    void show()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }

    Point add(Point p)
    {
        Point temp;

        temp.x = x + p.x;
        temp.y = y + p.y;

        return temp;
    }
};

int main()
{
    Point p1{2,3};
    Point p2{4,5};

    cout << "Point 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    Point p3 = p1.add(p2);

    cout << "Addition of Point 1 and Point 2: ";
    p3.show();

    return 0;
}