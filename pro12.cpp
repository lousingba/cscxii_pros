//Function overriding
#include<iostream>
using namespace std;

class A
{   int x;
    public:
     void setA(int i)
     {
         x=i;
     }
     void display()
     {
         cout<<"\nX = "<<x;
     }
};

class B : public A
{    int y;
    public:
        void setB(int j)
         {
            y=j;
        }
        void display()
        {
            cout<<"\ny = "<<y;
        }
};

int main()
{
    B ob1;
    ob1.setA(10);
    ob1.setB(20);
    ob1.display();
    ob1.A::display();
}