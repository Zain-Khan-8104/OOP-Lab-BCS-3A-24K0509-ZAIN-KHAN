#include<iostream>
#include<string>
using namespace std;

// Design a class OrderDetails for an e-commerce platform that combines several concepts. The
// class should have orderID (int), itemName (string), and deliveryFee (a constant double) as
// private members. Implement a Parameterized Constructor that takes values for all three: it must
// use the this keyword to assign the parameters to the member variables orderID and itemName
// (assuming naming conflict) and use a Member Initializer List to set the deliveryFee. The class
// must also have a Destructor that prints a message confirming the order's specific orderID is
// being "Archived and memory cleared".


class OrderDetails
{
private:
    int id;
    string name;
    const double deliveryfee;

public:
    OrderDetails(int id, string name, double deliveryfee)
        : deliveryfee(deliveryfee)
    {
        this->id = id;
        this->name = name;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Item Name: " << name << endl;
        cout << "Delivery Fee: " << deliveryfee << endl;
    }

    ~OrderDetails()
    {
        cout << "Order " << id << " is being archived and memory cleared." << endl;
    }
};

int main()
{
    OrderDetails order1(780, "MIGHTY BURGER", 100);
    order1.display();

    return 0;
}
