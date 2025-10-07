#include<iostream>
#include<string>
using namespace std;

// A currency exchange counter in a Pakistani bank uses a fixed exchange rate that should not
// change after setup. Create a class CurrencyExchange with the following private members:
// PKR_to_USD_Rate (a constant double), branchName (a reference to a string), and
// totalTransactions (integer). The Constructor must accept values for all three members, but it
// must use a Member Initializer List to initialize the constant and the reference variables, as they
// must be set at the time of object creation. Include a method convertPKRtoUSD that uses the fixed
// rate to calculate and return the USD equivalent for a given PKR amount.

class CurrencyExchange
{
    private:
    const double PKR_to_USD_Rate;
    string branchname;
    int totalTransactions;
    float usd;
    public:
    CurrencyExchange(double PKR_to_USD_Rate,string name,int totalTransactions):PKR_to_USD_Rate(PKR_to_USD_Rate),branchname(name),totalTransactions(totalTransactions){}

    float convertPKRtoUSD()
    {
        usd = totalTransactions/PKR_to_USD_Rate;
        return usd;
    }

};

int main()
{
    CurrencyExchange c(290,"saddar",50000);
    cout<<"USD :"<<c.convertPKRtoUSD()<<endl;
    return 0;
}