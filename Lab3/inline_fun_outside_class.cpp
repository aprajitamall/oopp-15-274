#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    void input(int a, int b);
    void show();
};


inline void Point::input(int a, int b)
{
    x = a;
    y = b;
}


inline void Point::show()
{
    cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
    Point p1, p2;

    p1.input(10, 20);
    p2.input(30, 40);

    cout << "Point 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}