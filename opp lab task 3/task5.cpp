// Define a Concrete class with a single private string data member message. The class
// should have a constructor that takes a string as an argument and initializes the
// message data member. The class should also have a public member function
// displayMessage() that prints the stored message. In main(), create an object of the
// Concrete class and pass a string to its constructor, then call the displayMessage()
// function. A concrete class provides an implementation for all of its methods.

#include<iostream>
#include<string>

using namespace std;

class concrete
{
    private: 
    string name;
    public:
    concrete(string name)
    {
        this->name = name;
    }

    void display()
    {
        cout<<"name :"<<name;
    }

};
int main()
{
    string name;
    cout<<"Enter the string :";
    cin>>name;
    concrete c2(name);
    c2.display();
    return 0;
}