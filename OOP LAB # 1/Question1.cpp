#include<iostream>
#include<string>

using namespace std;

int main()
{
    int amount;
    cout<<"Enter the amount :";
    cin>>amount;
    int arr[]={5000,500,100,20,5,1};
    for(int i=0;i<6;i++)
    {
        int count = amount/arr[i];
        if(count>0)
        cout<<arr[i]<<"x"<<count<<"\n";

        amount = amount%arr[i];

    }
    return 0;
}