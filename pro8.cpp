//Scope resolution
#include<iostream>
using namespace std;

int g = 100; //global fullname ::g
class A
{
    int x; // Fullname A::x
    void pri_f()
    {
        cout<<"\nI'm a private member function.\nSo, u can't access me using object along with dot operator.";
    }
    public:
    void getval() // full name A::getval()
    {
        x=90;
        cout<<x;
    }
};

int main()
{
    int g = 10;// local for main()
    A oA1;
    oA1.getval();
    //oA1.pri_f()
    return 0;
}

