// Write a program in C++ that dynamically allocates memory for a square matrix (NxN), takes
// input from the user, and calculates the sum of both the main diagonal and the secondary
// diagonal. The program should then display both sums and the matrix.
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter number of rows  :";
    cin>>rows;
    int **matrix = new int*[rows];
    for(int i=0;i<rows;i++)
    {
        matrix[i] = new int[i];
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int sumM=0;
    int sumS=0;
    for(int i=0;i<rows;i++)
    {
        sumS += matrix[i][rows-1-i]; 
        for(int j=0;j<rows;j++)
        {
            if(i==j)
            {
                sumM+=matrix[i][j];
            }
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"Sum of the main diagonal :"<<sumM<<endl;
    cout<<"Sum of the Sec diagonal :"<<sumS<<endl;

    return 0;
}