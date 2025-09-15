// Write a program in C++ that creates a function named FirstAndLastIndex which takes a string, a
// character, and two pointer variables as arguments. It should calculate and return the first and last
// occurrence of the character in the string using pointers.
#include<iostream>
#include<string>


using namespace std;

void FirstandlastIndex(char ch,string str,int *first,int *last)
{
    *first = -1;
    *last = -1;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==ch)
        {
            if (*first == -1)
            {
                *first = i;
            }
            *last = i;
            
        }
    }
}

int main()
{
    char ch ;
    string str;
    int first , last;

    cout<<"Enter a string";
    cin>>str;
    cout<<"Enter a character for search:";
    cin>>ch;

    FirstandlastIndex(ch,str,&first,&last);

    if(first == -1)
        cout << "Character :" << ch << " not found in string." << endl;
    else
    {
        cout << "First occurrence of " << ch << "' at index: " << first << endl;
        cout << "Last occurrence of '" << ch << "' at index: " << last << endl;
    }


    return 0;
}