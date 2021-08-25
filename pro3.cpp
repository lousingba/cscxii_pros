#include<iostream>
using namespace std;

class FamilyMoney {
    private:
        float f_money;
        void withdraw(float amount){
            f_money -= amount;
        }

    public:
        FamilyMoney(){f_money=500;}
        void f_member(){
            int  choice;
            float m;
            cout<<"\nEnter the withdraw amount : ";
            cin>>m;
            if (m>0 && m<=f_money)
                withdraw(m);
            else
                cout<<"\nInvalid amount.";
        }//f_member end
        friend void IMyourFriend(FamilyMoney); // friend function
};// class end

void IMyourFriend(FamilyMoney fm)
{
    cout<<"\nHello, I am your friend and I know your balance: "<<fm.f_money;
}

int main()
{
    FamilyMoney o1;
    o1.f_member();
    IMyourFriend(o1);
    return 0;
}

