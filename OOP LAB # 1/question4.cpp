#include<iostream>
#include<string>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of arrays:";
    cin>>size;
    int arr1[size];
    int arr2[size];
    cout<<"Enter the elements of array 1 :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of array 2 :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<size;i++)
    {
        int temp=0;
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    int max = arr1[0];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=0;
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
            
        }
    }
    cout<<"array after swapping "<<endl;
    cout<<"array 1 :";
    for(int i=0;i<size;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";
    cout<<"array 2 :";
    for(int i=0;i<size;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    cout<<"Largest element of arr :"<<arr1[size-1]<<endl;
    cout<<"Second Largest element of arr :"<<arr1[size-2]<<endl;
    int flag =1;
    int temp=-1;
    for(int i=0;i<size;i++)
    {
        int count =0;
        for(int j=0;j<size;j++)
        {
            if(arr1[i]==arr1[j])
            {
                count++;

            }
            if(count==1)
            {
                int temp = arr1[i];
                flag =0;
                break;
            }
        }   
        
    }
    if(flag)
    {
        cout<<"unique element of the array is :"<<temp<<endl;
    }else{
        cout<<"unique element of the array is :"<<arr1[0]<<endl;
    }
}   