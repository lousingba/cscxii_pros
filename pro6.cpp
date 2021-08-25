#include<iostream>
using namespace std;

class Person
{
    static int common_fund; //declartion                                       //static char common_basket[30];
    public:
        void save(int f)
        {
            common_fund += f;
        }
        void show()
        {
         cout<<"\nCurrent Shared fund is Rs "<<common_fund; //cout<<"\nCommon basket contains "<<common_basket;
        }
};

int Person::common_fund; // definition                   //char Person::common_basket[] = "Empty";

int main()
{
    Person tomba, chaoba, thoibi;
    tomba.save(10);
    chaoba.save(5);
    thoibi.save(20);
    tomba.show();
    return 0;
}