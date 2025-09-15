// 7. Create a C++ program for a simple student management system.
// ● Define a class Student with the following private data members: name (string),
// rollNo (int), marks (double), and grade (char).
// ● Implement a public constructor Student(string, int, double) that initializes name,
// rollNo, and marks.
// ● Implement a public member function calculateGrade() that determines the
// student's grade based on their marks (A for marks >= 90, B for >= 80, C for >=
// 70, F otherwise). This function should store the result in the grade data member.
// ● Implement a public member function displayStudentInfo() that prints the student's
// name, roll number, marks, and calculated grade.
// ● In main(), create two Student objects, call the calculateGrade() function for each,
// and then use the displayStudentInfo() function to show their details.
#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    double marks;
    char grade;
    public:

    student(string name,int roll,double marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    void calculategrade()
    {
        if(marks >=90)
        {
            grade = 'A';
        }else if(marks >=80)
        {
            grade = 'B';
        }else if(marks >=70)
        {
            grade = 'C';
        }else{
            grade = 'F';
        }
    }

    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll :"<<roll<<endl;
        cout<<"Marks :"<<marks<<endl;
        cout<<"Grade :"<<grade<<endl;
    }

};

int main()
{
    student s1("zain",2,90);
    student s2("Junaid",3,85);

    s1.calculategrade();
    s1.display();
    cout<<"\n";
    s2.calculategrade();
    s2.display();
    return 0;
}