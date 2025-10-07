#include<iostream>
#include<string>
using namespace std;
// In Pakistan, mobile phone users often purchase pre-paid 'load'. Design a C++ class named
// MobileAccount to manage this. The class must include two data members: balance (double)
// and phoneNumber (string). Implement a Default Constructor that automatically initializes the
// balance to 50.0 PKR (Pakistani Rupees) and sets the phoneNumber to an empty string "".
// Additionally, implement a Parameterized Constructor that accepts a phoneNumber and an initial
// balance to set the object's details upon creation. Finally, include a display() method to output
// the phone number and current balance for any object created.
class mobileaccount
{   
    private:
    float balance;
    string number;
    public:
    mobileaccount(){
        balance = 50;
        number = "";

    }
    mobileaccount(float balance , string number ):balance(balance),number(number){}

    void display()
    {
        cout<<"balance :"<<balance<<endl;
        cout<<"number :"<<number<<endl;
    }

};

int main()
{
    float balance;
    string number;
    cout<<"Enter balance :";
    cin>>balance;
    cout<<"Enter number :";
    cin>>number;

    mobileaccount m1(balance,number);

    m1.display();
    

    return 0;
}