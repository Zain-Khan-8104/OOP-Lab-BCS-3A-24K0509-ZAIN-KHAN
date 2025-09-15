// 1. Create a C++ program that defines a class called Student. This class should have
// two public data members: string name and int rollNumber. In the main() function, create
// an object of the Student class and assign values to its data members. Finally, print the
// student's name and roll number.

#include<iostream>
#include<string>

using namespace std;
class student
{
    private:
        string name;
        int roll;
    public:

    void set(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    string getname()
    {
        return name;
    }

    int getroll()
    {
        return roll;

    }
};

int main()
{
    string name;
    int roll;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"enter your roll  number:";
    cin>>roll;

    student s1;
    s1.set(name,roll);

    cout<<"Name :"<<s1.getname()<<endl;
    cout<<"Roll :"<<s1.getroll()<<endl;;
    


    return 0;
}