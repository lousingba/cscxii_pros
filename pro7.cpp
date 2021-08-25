//static Memberfunction
#include<iostream>
using namespace std;

class Person
{
    static int common_fund; //static declartion
    float earn_fund;                                   
    public:
        void save(int f) //Definition
        {
             common_fund += f;
             earn_fund=(.01*f); //10% of f
        }
        static void show_Com_fund()
        {
         cout<<"\nCurrent common shared fund is Rs "<<common_fund; 
        }
        float show_Personal_earn_fund()
        {
         return earn_fund; 
        }
};

int Person::common_fund=0; //definition

int main()
{
    Person p1,p2;
    p1.save(10000);
    cout<<"P1's earned personal fund is Rs "<<p1.show_Personal_earn_fund();
    Person::show_Com_fund();// static function
    p2.save(20000);
    cout<<"\nP2's earned personal fund is Rs "<<p2.show_Personal_earn_fund();
    Person::show_Com_fund(); //static function
    return 0;
}