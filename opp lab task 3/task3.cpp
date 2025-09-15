// 3. Create a C++ class named Calculator. This class should have two private data
// members, num1 and num2, and public member functions setNumbers(int, int) to set
// their values and add() to return their sum. Define all member functions inside the class
// definition. In the main() function, create a Calculator object, set the numbers, and print
// the result of the add() function.
#include<iostream>
#include<string>
using namespace std;

class calculator
{
    private:
    int num1, num2;
    public:

    void setnum(int num1 , int num2)
    {
        this->num1 = num1 ;
        this->num2 = num2;

    }
    int add()
    {
        return num1 + num2 ;
    }

};
int main()
{
    int num1, num2 ;

    cout<<"Enter num1 and num2 :";
    cin>>num1>>num2;

    calculator c1;

    c1.setnum(num1,num2);

    cout<<"The sum of the number is :"<<c1.add();

    return 0;
}