// Order of constructor Execution
#include<iostream>
using namespace std;

class Base
{   
    public:
    int x;
    Base(int a = 0)
    {   cout<<"\nConstructor Base.";
        x=a;
    }
    
};

class D1 : virtual public Base  // virtual base class
{   
    public:
    int y;
    D1(int a, int b) :Base(b)
    {   cout<<"\nConstructor D1.";
        y=a;
    }
    
};

class D2 : virtual public Base  // virtual base class
{   
    public:
    int z;
    D2(int a, int b): Base(b)
    {   cout<<"\nConstructor D2.";
        z=a;
    }  
};

class D3 : public D2, virtual public D1
{   
    public:
    int sum;
    D3(int a, int b, int c , int i, int j) : D1(a,b), D2(c,i)
    {  
        cout<<"\nConstructor D3.";
        sum=j;
    }
    
};

int main()
{
    D3 ob(1,2,3,4,5);
    return 0;
}