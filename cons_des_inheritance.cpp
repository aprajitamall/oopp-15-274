#include <bits/stdc++.h>
using namespace std;
class Emp{
public:
Emp()
{
    cout<<"employee constructor"<<endl;
}
~Emp()
{
    cout<<"emp dest"<<endl;
}
};
class Man:public Emp{
    public:
    Man()
    {
        cout<<"manager constructor"<<endl;
    }
    ~Man(){
        cout<<"man dest"<<endl;
    }
};
class Family{
    public:
    Family()
    {
      cout<<"family constructor"<<endl;
    }
    ~Family()
    {
        cout<<"family dest"<<endl;
    }
};
class Director: public Family,public Man{//public Man,public Family{
    public:
    Director()
    {
        cout<<"Director constructor"<<endl;
    }
    ~Director()
    {
        cout<<"director dest"<<endl;
    }
};

int main()
{
    // Emp e;
    // Man m;
     Director d;

    return 0;
}