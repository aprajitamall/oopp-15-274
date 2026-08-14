#include <bits/stdc++.h>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    Point(){
        x=y=0;
    }
    Point(int a,int b){
     x=a;
     y=b;
    }
    void show()
    {
    cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    Point p;
    p.show();
    Point q{2,3};
    q.show();
    return 0;
}