#include<iostream>
#include<string>
using namespace std;

// The Pakistan Telecommunication Authority (PTA) assigns a unique, non-transferable serial
// number to every registered device. Create a class MobileDevice with private data members:
// modelName and IMEINumber. Declare IMEINumber as a constant data member that must be
// initialized via the constructor's initializer list. Implement a public constant member function
// verifyDevice() that displays the device's details and guarantees that it will not modify the
// stored IMEINumber or modelName.

class mobiledevice
{
    private:
    string  modelname;
    const string imeinumber;
    public:
    mobiledevice(string modelname,string imeinumber):modelname(modelname),imeinumber(imeinumber){};

    void verifydevice()
    {
        cout<<"MODEL NAME :"<<modelname<<endl;
        cout<<"IMEIN NUMBER :"<<imeinumber<<endl;
    }
};

int main()
{
    mobiledevice p1("iphone","1223-2342-23");

    p1.verifydevice();

    return 0;
}