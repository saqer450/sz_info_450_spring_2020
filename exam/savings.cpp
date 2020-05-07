#include <iostream>
#include <cstring>
//#include "account.h"
#include "savings.h"
using namespace std;



void Savings::DoWithdraw( double amount)
{
    if(amount<=0){cout<<"\nInvalid withdraw\n"<<endl;}
    else if(Getbalance()<amount){cout<<"\nNot enough balance\n"<<endl;}
    else
    {
        MakeDeposit(amount*(-1));
    }  
    
}

void Savings::display()
{
    Account::display();
    cout<< "Total number of deposit: "<<numdeposits<<endl;
    cout<< "Total number of withdrawal: "<<numwithdraws<<endl<<endl;
}

Savings::Savings()
{
    ;
}
Savings::Savings(string name, long id, double amount):Account(name, id, amount)
{
    ;
}


