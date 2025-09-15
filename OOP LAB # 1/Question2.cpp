#include<iostream>
#include<string>
using namespace std;
int main()
{
    int rows;
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"Enter the number of rows :";
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            cout<<" ";
        }
        int temp = 2*i-1;
        for(int k=0;k<temp;k++)
        {
            cout<<str[k];
        }
        cout<<"\n";
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        int temp=2*(rows-i);
        if(temp%2==0)
        {
            temp--;
        }
        for(int k=0;k<temp;k++)
        {
            cout<<str[k];
        }
        cout<<endl;
    }
}