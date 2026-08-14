#include <bits/stdc++.h>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    Point():x{0},y{0} {
        cout<<"Default construtor"<<endl;
    }
       
    Point(int a,int b):x{a},y{b} {
        cout<<"Parameterized construtor"<<endl;
    }
    // Point add(Point p)
    // {  Point temp;
    //    temp.x=x+p.x;
    //    temp.y=y+p.y;
    //    return temp;
    // }
    Point add( Point p)
    {
        return Point(x+(p.x),y+(p.y));//nameless object creation.
    }
    void add(Point p,Point q)
    {
        x=(p.x)+(q.x);
        y=(p.y)+(q.y);

    }
    void show()
    {
    cout<<x<<","<<y<<endl;
    }
};
int main()
{
    Point o,s;
    o.show();
    Point q{2,3};
    q.show();
    Point p{4,7};
    p.show();
    point z=p;
    z.show();
    Point r=p.add(q);
    r.show();
    s.add(p,q);
    s.show();
    return 0;
}