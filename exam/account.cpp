
#include <iostream>
#include <cstring>
#include "account.h"




void Account::SetName(string str)
{
    name = str;
}

void Account::SetTaxID(long id)
{
    taxID = id;
}

void Account::Setbalance(double amount)
{
    balance = amount;
} 

string Account::GetName()
{
    return name;
}

long Account::GetTaxID()
{
    return taxID;
}

double Account::Getbalance()
{
    return balance;
} 

void Account::MakeDeposit( double amount )
{
    if(amount<0)
    {
        numwithdraws++;
    }
    else numdeposits++;
    balance+=amount;
}

Account::Account ()
{
    numdeposits=0;
    numwithdraws=0;
}

Account::Account (string name, long id, double amount)
{
    SetName(name);
    SetTaxID(id);
    Setbalance(amount);
    numdeposits=0;
    numwithdraws=0;
}

void Account::display()
{
    cout<< "Name: "<<name<< "  TaxId: "<<taxID<<"  Balance: "<<balance<<endl;;
} 
