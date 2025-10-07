#include<iostream>
#include<string>
using namespace std;
// Real estate management involves property deeds, which might share legal data. Model this with
// a class PropertyDeed that has an integer pointer *ownerID as its private member, where
// memory for the ID is allocated dynamically in the regular constructor. Implement an Explicit
// Shallow Copy Constructor that copies only the pointer address from the source object to the new
// object, resulting in shared memory. Then, implement a Deep Copy Constructor that allocates
// new memory for *ownerID and copies the actual data value, ensuring the new object's data is
// independent of the original. Demonstrate the difference in behavior by changing the data in an
// original object and observing the result in the shallow and deep copies using a display()
// method that shows both the data value and the memory address.

class propertydeed
{
private:
    int *ownerID;

public:
    propertydeed() {}
    propertydeed(int id) {
        ownerID = new int;
        *ownerID = id;
    }

    propertydeed(const propertydeed &p, bool shallow) {
        if (shallow) {
            ownerID = p.ownerID;   
            cout << "Shallow copy" << endl;
        } else {
            ownerID = new int(*p.ownerID);
            cout << "Deep copy" << endl;
        }
    }
    propertydeed(const propertydeed &p) {
        ownerID = new int(*p.ownerID);
        cout << "Deep copy" << endl;
    }

    void setid(int id) {
        *ownerID = id;
    }

    void display() {
        cout << "Owner ID: " << *ownerID << ", Address: " << ownerID << endl;
    }

    ~propertydeed() {
        delete ownerID; 
    }
};

int main()
{
    propertydeed p1(1);
    propertydeed p2(p1, true);
    propertydeed p3(p1, false);

    cout << "\nBefore change:\n";
    p1.display();
    p2.display();
    p3.display();

    p1.setid(3);

    cout << "\nAfter changing p1:\n";
    p1.display();
    p2.display();
    p3.display();

    return 0;
}

