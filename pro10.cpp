//Situation Copy constructor where are invoked.
#include<iostream>
using namespace std;

class Student
{
    int roll;
    public:
        Student(int r = 0)
        {
            cout<<"\nI\'m a Parameterize constructor.";
            roll = r;
        }
        Student(Student & s)
        {
            cout<<"\nI\'m a Copy constructor.";
            roll = s.roll;
        }
        ~Student()
        {
            cout<<"\nI'M Destructor. I destroy Objects.";
        }
};

Student duplicate(Student s)
{
    return s; //situation 3
}

int main()
{
 Student stud1(1);// calling the contructor with default agrgument.
 Student stud2 = stud1; // situation 1
 duplicate(stud2); //situation 2
 return 0;
}
