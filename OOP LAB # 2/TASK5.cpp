#include <iostream>
using namespace std;

int main()
{
    int size1, size2;

    cout << "Enter the size of string 1: ";
    cin >> size1;
    cout << "Enter the size of string 2: ";
    cin >> size2;

    char *str1 = new char[size1 + 1];
    char *str2 = new char[size2 + 1];
    char *str3 = new char[size1 + size2 + 1];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    int i = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str3[i] = str2[j];
        i++;
        j++;
    }

    str3[i] = '\0';

    cout << "\nFirst String: " << str1;
    cout << "\nSecond String: " << str2;
    cout << "\nConcatenated String: " << str3 << endl;

    delete[] str1;
    delete[] str2;
    delete[] str3;

    return 0;
}
