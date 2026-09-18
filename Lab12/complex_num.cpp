#include <bits/stdc++.h>
using namespace std;
class Comp{
    private:
    int real,img;
    public:
    Comp(int r=0,int i=0): real{r},img{i}{}
    void show()
    {
        cout<<real<<","<<img<<endl;
    }

    Comp operator - ()
 {
    return Comp(-real,-img);
 }
 Comp operator - (Comp P)
 {
    return Comp(real-P.real,img-P.img);
 }
  friend Comp operator + (int n,Comp P);

};

Comp operator + (int n,Comp P)
{
    return Comp(n+P.real,n+P.img);
}
int main()
{
    Comp c1(5,20);
    Comp c2;
    c1.show();
    c2.show();
    Comp c3=5+c1;
    c3.show();
    Comp c4=-c3;
    c4.show();
    Comp c5=c3-c1;
    c5.show();
}