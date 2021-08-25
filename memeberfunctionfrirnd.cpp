#include<iostream>
using namespace std;

class B;
class A
{   protected:

    public:
        void f_A()
        {
            cout<<"\nI am f_A.";
        }
        friend void B::f_B(A & obj);
};

class B
{
    public:
        void f_B(A & obj)
        {
            cout<<"\nI am f_B. Let me introduce you someone. ";
            obj.f_A();
        }

};

int main()
{
    A oA;
    B oB;
    oB.f_B(oA);
}
