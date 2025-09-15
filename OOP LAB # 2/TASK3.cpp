// Write a program in C++ that creates a function named sumArray which takes an array and its size
// as arguments (using a pointer) and calculates the sum of all the elements in the array. The
// function should use pointer arithmetic to access the elements.
#include<iostream>
#include<string>

using namespace std;

int sumArray(int *array,int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
        sum += *(array + i);
    }
    return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int *array = new int[size];

    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<" : "<<endl;
        cin>>*(array + i);
    }
    int result=0;
    result = sumArray(array,size);
    cout<<"The sum of the array  is :"<<result;
    return 0;
}