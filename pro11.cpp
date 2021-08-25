// inheritance
#include<iostream>
using namespace std;

class Parts
{   int engine_no;
    protected:
        int wheel;
        char engine[19];
    public:
        void get_v()
        {
            cout<<"\nEnter the engine no: ";
            cin>>engine_no;
            cout<<"\nEnter engine type patrol, Diesel, electric: ";
            cin>>engine;
            cout<<"\nEnter no. of wheels: ";
            cin>>wheel;        
        }
};

class Type
{
    public:
        char v_type[17];
        void get_type()
        {
            cout<<"\nEnter the type of vehicle (Electric, Non-electric or Hybrid.): ";
            cin>>v_type;
        }
};

class Vehicle : private Parts , protected Type
{
    public:
        void get_all()
        {
            get_v();
            get_type();
        }
        void display_spec()
        {
            cout<<"\nEngine Type :"<<engine;
            cout<<"\nVehicle type :"<<v_type;   
            cout<<"\nNo. wheels : "<<wheel;
        }
};

int main()
{
    Vehicle v1;
    v1.get_all();
    v1.display_spec();
    return 0;
}