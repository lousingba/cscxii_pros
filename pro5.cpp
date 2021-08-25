#include<iostream>
using namespace std;

class Island_B; //Forward declaration.

class Island_A
{
    int spice;
    public:
        void collect_spice(int s)
        {
            spice = s;
        }
        friend void bridge(Island_A, Island_B &);
};

class Island_B
{
    int fish;
    public:
        void catch_fish(int f)
        {
            fish = f;
        }
        friend void bridge(Island_A, Island_B &);
};

void bridge(Island_A ia, Island_B & ib) //Bridge function.
{
  cout<<"\nI'm the bridge connecting Island_A and Island_B.";
  cout<<"\nI got "<<ia.spice <<" ton of spice from Island_A and "<<ib.fish<<" ton of fish from Island_B. ";
  cout<<"\nTotal Ton = "<<(ia.spice + ib.fish);
}

int main()
{
    Island_A ia;
    Island_B ib;
    ia.collect_spice(19);
    ib.catch_fish(10);
    bridge(ia,ib);
    return 0;
}
