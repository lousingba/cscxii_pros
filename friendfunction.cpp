#include<iostream>
using namespace std;

class FamilyMoney {
    private:
        float f_money;
        void check_bal(){
            cout<<"\n Current family bal is : "<<f_money;
        }
        void deposit(float amount){
            f_money += amount;
        }
        void withdraw(float amount){
            f_money -= amount;
        }

    public:
        FamilyMoney(){f_money=0.0;}
        void f_member(){
            char responce='y';
            int  choice;
            float m;
            while (responce == 'y' || responce == 'Y'){
                cout<<"\nEnter 1 for check bal, 2 for deposit and 3 for withdraw : ";
                cin>>choice;
                switch (choice)
                {
                    case 1:
                        check_bal();
                        break;
                    case 2:
                        cout<<"\nEnter the deposit amount : ";
                        cin>>m;
                        if (m>0)
                            deposit(m);
                        else
                            cout<<"\nInvalid amount.";
                        break;
                    case 3:
                        cout<<"\nEnter the withdraw amount : ";
                        cin>>m;
                        if (m>0)
                            withdraw(m);
                        else
                            cout<<"\nInvalid amount.";
                        break;
                    default:
                        cout<<"\nInvalid choice. ";
                } //switch end
                cout<<"\nDo you want to continue. press y for yes and N for no. ";
                cin>>responce;
            } //whild end
        }//member end
        friend void IMyourFriend(FamilyMoney); // friend function
};// class end

void IMyourFriend(FamilyMoney f)
{
    cout<<"\nI am your friend and I know your financial status : "<<f.f_money;
}

int main()
{
    FamilyMoney o1;
    o1.f_member();
    IMyourFriend(o1);
    return 0;
}

