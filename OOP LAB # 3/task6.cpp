// 6. Create a generalized class named Vehicle with public data members for make and
// model. Implement a public method displayInfo(). Then, create a specialized class
// named Car that inherits from Vehicle. The Car class should have an additional public
// data member engineType and its own displayInfo() method that calls the base class
// method and then prints the engineType. Classes at the top of an inheritance hierarchy
// are considered generalized, while those at the bottom are specialized.
#include<iostream>
#include<string>

using namespace std;

class vehicle
{
    public:

    string make;
    int model; 

    void setv(string make , int model)
    {
        this->make = make;
        this->model = model;
    }

    void display1()
    {
        cout<<"make :"<<make<<endl;
        cout<<"model :"<<model<<endl;
    }

};

class car : public vehicle
{
    public:
    string engine;

    void setc(string engine)
    {
        this->engine = engine;
    }

    void display()
    {
        cout<<"Engine Type :"<<engine<<endl;
    }
};

int main()
{
    string make;
    string engine;
    int model;
    car c1;

    cout<<"Enter make :";
    cin>>make;
    cout<<"Enter model :";
    cin>>model;
    cout<<"Enter the size of engine :";
    cin>>engine;

    c1.setv(make,model);
    c1.setc(engine);
    c1.display1();
    c1.display();

    return 0;
}
