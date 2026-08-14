#include <bits/stdc++.h>
using namespace std;
class Complex_no{
    private:
    int real,img;
    public:
    void input()
    {
        cin>>real;
        cin>>img;
    }
    void show()
    {
        if(img>=0)
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
            else
            cout<<real<<img<<"i"<<endl;
        
    }
    void add(int a,int b)
    {
        real+=a;
        img+=b;
    }
    void add(Complex_no P)
    {
     real+=P.real;
     img+=P.img;
    }
    void add(Complex_no P,Complex_no Q)
    {
        real=P.real+Q.img;
        img=P.img+Q.img;
    }
    // Complex_no add(int a,int b)
    // {
    //     complex n;
    //     n.real=real+a;
    //     n.img=img+b;
    //     return n;

    // }
};
int main()
{
    Complex_no c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c1.add(3,7);
    c1.show();
    c2.add(c1);//object as argument.
    c2.show();
    c3.add(c1,c2);
    c3.show();
// Complex_no ans=c1.add(5,10);
}