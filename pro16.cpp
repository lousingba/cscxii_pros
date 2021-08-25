// containership or Nesting of class.
#include<iostream>
using namespace std;

class A
{
    int x;
    public:
    A(int i)
    {   cout<<"\nConstructor A";
        x=i;
    }
};

class B
{
  A om;
  public:
  B(int j):om(j)
  {
      cout<<"\nContructor B.";
  }
};

int main()
{
    B ob(3);
    return 0;
}