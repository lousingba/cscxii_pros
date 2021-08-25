//Constructor in Derived class
#include<iostream>
using namespace std;

class Base
{
    int x;
    public:
        Base(int i)
        {
            cout<<"\nBase constructor.";
            x = i;
        }
        void show()
        {
            cout<<"\n"<<x;
        }
};

class D1 : Base
{
    int y;
    public:
        D1(int j, int k) : Base(j)
        {
            cout<<"\nD1 constructor.";
            y = k;
        }
        void display()
        {
            show();
            cout<<"\n"<<y;
        }
};

int main()
{
    D1 ob(10,20);
    ob.display();
    return 0;
}
