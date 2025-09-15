#include<iostream>
#include<string>

// 2. Modify the Student class from the previous task. Make the rollNumber data member
// private. Create public member functions setRollNo(int) and getRollNo() to set and
// retrieve the value of rollNumber. In the main() function, create a Student object, use the
// setter function to initialize the roll number, and use the getter function to print the roll
// number.

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