// Write a program in C++ that creates a function named SwapValues which takes two pointers as
// arguments and swaps their values without using a third variable.
#include<iostream>

using namespace std;

void swapvalues(int *a,int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}

int main()
{
    
    int *ptr = new int(5);
    int *ptr1 = new int(10);
    int a = *ptr;
    int b = *ptr1;
    cout<<"Values before swap a ="<<a<<" b ="<<b<<endl;
    swapvalues(&a,&b);
    cout<<"Values after swap a ="<<a<<" b ="<<b<<endl;

    delete ptr;
    delete ptr1;
    return 0;


}