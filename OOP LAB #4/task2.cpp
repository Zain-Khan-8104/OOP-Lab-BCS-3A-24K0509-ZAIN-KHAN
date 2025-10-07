#include<iostream>
#include<string>
using namespace std;

// The National University of Computer and Emerging Sciences-NUCES (NUCES) maintains
// student records. Create a class called NUCES_Student with private data members id (integer) and
// name (string). You must demonstrate constructor overloading by implementing three different
// constructors: a Default Constructor (initializing members to 0 and "Not Registered"), a
// Parameterized Constructor (Version 1) that accepts only the student's id (initializing name to
// "Name Pending"), and a Parameterized Constructor (Version 2) that accepts both id and name.
// For Version 2, if you use the same parameter names as the member variables (e.g., id, name),
// you must use the this keyword to correctly assign the parameter values to the object's member
// variables and resolve the naming conflict. Include a display() method for testing.

class NUCES_Student
{
    private:
    int id;
    string name;
    public:
    NUCES_Student()
    {
        id = 0;
        name ="";
    }
    NUCES_Student(int id):id(id){}
    NUCES_Student(int id,string name):id(id),name(name){}

    void display()
    {
        cout<<"id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
    }

};

int main()
{
    NUCES_Student m1(1);
    m1.display();
    cout<<endl;
    NUCES_Student m2(2,"zain");
    m2.display();
    return 0;

}