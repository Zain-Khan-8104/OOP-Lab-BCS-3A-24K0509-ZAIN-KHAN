#include<iostream>
#include<string>
using namespace std;

void isprime(int start,int end)
{
    cout<<"Prime numbers between "<<start<<" and "<<end<<" are:"<<endl;

    for(int num=start; num<=end; num++)  
    {
        if(num < 2) 
            continue;

        int flag = 1; 
        for(int i=2; i*i<=num; i++)
        {
            if(num % i == 0) 
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            cout<<num<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int start,end;
    cout<<"Enter the start number :";
    cin>>start;
    cout<<"Enter the end number :";
    cin>>end;
    isprime(start,end);
    return 0;
}
