#include<iostream>
#include<string>
using namespace std;

// Design a C++ class named PetrolPump to manage fuel transactions. Implement a static data
// member called pricePerLiter (e.g., 270.50 PKR) to store the uniform rate for all transactions
// across all pump objects. Include non-static members for pumpID and litersFilled, and write a
// simple non-static member function, printReceipt(), that calculates and displays the total
// amount due using the shared static price.

class petrolpump
{
    static float priceperliters;
    int pumpid;
    float literfilled;

    public:

    petrolpump(int pumpid, float literfilled):pumpid(pumpid),literfilled(literfilled){}

    void printreceipt()
    {
        cout<<"PUMP ID : "<<pumpid<<endl;
        cout<<"Liter Filled : "<<literfilled<<endl;
        cout<<"Pice per liter :"<<priceperliters<<endl;
        cout<<"Total :"<<literfilled*priceperliters<<endl;
    }

};
float petrolpump :: priceperliters = 270.50;

int main()
{
    petrolpump p1(1,15);
    petrolpump p2(2,20);
    p1.printreceipt();
    cout<<"\n";
    p2.printreceipt();
}