// Virtaul base class
#include<iostream>
using namespace std;

class Base
{
    public:
    int x;
};

class D1 : virtual public Base  // virtual base class
{
    public:
    int y;
};

class D2 : virtual public Base  // virtual base class
{
    public:
    int z;
};

class D3 : public D1, public D2
{
    public:
    int sum;
};

int main()
{
    D3 ob;
    ob.x=2;
    ob.y=4;
    ob.z=5;
    ob.sum=ob.x+ob.y+ob.z;
    cout<<"\nSum = "<<ob.sum;
    return 0;
}