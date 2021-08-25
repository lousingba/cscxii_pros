//Function Overloading
#include<iostream>
using namespace std;

float volume(int r); // function declaration
float volume(int r, int h); // function declaration

int main()
{
    int rs, rc,hc;
    cout<<"\nEnter the radius of the sphere (in cm): ";
    cin>>rs;
    cout<<"\nEnter the radius  and height of the cylinder (in cm): ";
    cin>>rc>>hc;
    cout<<"\nThe volume of the Sphere is: "<<volume(rs)<<" cubic cm";
    cout<<"\nThe volume of the Cylinder is: "<<volume(rc,hc)<<" cubic cm";
    return 0;
}

float volume(int r)
{
    float v;
    v=(4*3.142*r*r*r)/3;
    return v;
}

float volume(int r, int h)
{
    float v;
    v=(3.142*r*r*h);
    return v;
}