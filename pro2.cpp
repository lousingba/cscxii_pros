#include<iostream>
using namespace std;

class Bank
{
    private:
        double b_bal;
    public:
        Bank(){b_bal = 0.0;}//constructor
        void depo(float m)
        {
            b_bal+=m;
            cout<<"\nRs "<<m<<" added to your A/C.";
        } 
        void fcheck_bal() const;    // Constant member function
} person1;

void Bank::fcheck_bal() const
{
    cout<<"\nCurrent balance is : "<<b_bal;
}

int main()
{
    person1.depo(500);
    person1.fcheck_bal();
}
