#include<iostream>
using namespace std;

class convert
{
    private:
        float mile, km;
        void con_to_km(int mile)
        {
            cout<<"\n"<<mile<<" mile is equal to "<<(mile*1.609)<<" km.";
        }
        void con_to_mile(float);
    public:
        void input()
        {
            cout<<"Enter the value in mile : ";
            cin>>mile;
            cout<<"Enter the value in km : ";
            cin>>km;
            con_to_km(mile);
            con_to_mile(km);
        }
};

void convert::con_to_mile(float km)
{
      cout<<"\n"<<km<<" km is equal to "<<(km/1.609)<<" mile.";
}

int main()
{
    convert o1;
    o1.input();
    return 0;
}

