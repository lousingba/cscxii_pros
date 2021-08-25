#include<iostream>
using namespace std;

//function overlaoding
int sum(int x=5){cout<<"\n Inside sumF1"; return x;}
int sum(int x,int y=10){cout<< "\n Inside sumF2"; return x+y;}
float sum(int x,float y){cout<< "\n Inside sumF3"; return x+y;}
float sum(float x,int y){cout<< "\n Inside sumF4"; return x+y;}
float sum(float x,float y){cout<< "\n Inside sumF5"; return x+y;}

int main()
{
    int total;
    total = sum(1.2f,1.3f);// function call
    cout<<"\nTotal ="<<total;
    return 0;
}

