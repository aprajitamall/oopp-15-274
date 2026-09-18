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
//     // using member function
//      Comp operator + (Comp &c)
// {      
//        int r=this->real+c.real;
//         int i=this->img+c.img;
//      Comp t(r,i);
//     return t;
//     //  return Comp(this->real+c.real,this->img+c.img);
//     //  return Comp(real+c.real,img+c.img);
//     }
 Comp operator + (int n)
 {
    return Comp(real+n,img+n);
 }
//   using friend function
 friend Comp operator +(Comp P,Comp Q);
// friend Comp operator + (Comp c,int n);
};
Comp operator + (Comp P,Comp Q)
{
    return Comp(P.real+Q.real,P.img+Q.img);
} 
// Comp operator + (Comp c,int n)
// {
//     return Comp(c.real+n,c.img+n);
// }
int main()
{
    Comp c1(5,20);
    Comp c2;
    c1.show();
    c2.show();
    Comp c3=c1+c2;
    c3.show();
    Comp c4=c1+5;
    c4.show();
}