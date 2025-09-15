#include <iostream>
using namespace std;

void matrixmul(int mat1[10][10], int mat2[10][10], int r1, int c1, int r2, int c2)
{
    int result[10][10] = {0};

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            result[i][j] = 0;
            for(int k=0; k<c1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant Matrix: \n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int r1, c1, r2, c2;
    int mat1[10][10], mat2[10][10];

    cout << "Enter number of rows and cols of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter elements of first matrix:\n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter number of rows and cols of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter elements of second matrix:\n";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    if(c1 != r2)
    {
        cout << "Matrix cannot be multiplied!" << endl;
        return 1;
    }

    matrixmul(mat1, mat2, r1, c1, r2, c2);

    return 0;
}
