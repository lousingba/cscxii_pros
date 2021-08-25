//Constructor Overloading
#include <iostream>
using namespace std;

class Laptop
{
    int processor_core;
    int ram_size;
    public:
        Laptop() // Default constrctor
        {
            processor_core = 1;
            ram_size = 4;
        }
        Laptop(int,int);
        Laptop(Laptop &);
        void display_spec()
        {
            cout<<"\nNo. of core = "<<processor_core<<" and RAM size = "<< ram_size <<" GB.";
        }
};
Laptop::Laptop(int p, int r) // Parameterized constructor
{
    processor_core = p;
    ram_size = r;
}

Laptop::Laptop(Laptop & pc) //Copy constructor
{
    processor_core = pc.processor_core;
    ram_size = pc.ram_size;
}

int main()
{
    Laptop l1; // Default constructor
    Laptop l2(4,6); //implicit call
    Laptop l3(2,8); //implicit call
    Laptop l4(l2); //implicit call to copy constructor
    Laptop l5 = l3; //Explicit call to copy constructor
    l1 = l5; // Overloded assignment operator
    l1.display_spec();
    l2.display_spec();
    l3.display_spec();
    l4.display_spec();
    l5.display_spec();
    return 0;
}