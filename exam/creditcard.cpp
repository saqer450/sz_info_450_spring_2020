#include <iostream>
#include <cstring>
//#include "account.h"
#include "creditcard.h"
using namespace std;




void CreditCard::DoCharge( string name , double amount)
{
    if(amount<=0){cout<<"\nInvalid charge\n"<<endl;}
    else if(Getbalance()<amount){cout<<"\nNot enough balance\n"<<endl;}
    else
    {
        MakeDeposit(amount*(-1));
        for(int i=9;i>0;i--)
        {
            last10charges[i]=last10charges[i-1];
        }
        last10charges[0] = name;
        
    }
    
    
}


void CreditCard::MakePayment(double amount)
{
    if(amount<=0){cout<<"\nInvalid payment\n"<<endl;}
    else
    {
        MakeDeposit(amount);
        
    }
    
}


void CreditCard::display()
{
    Account::display();
    cout<<"Last ten checknum: ";
    for(int i=0;i<10;i++)
        {
            if(last10charges[i]=="\0")break;
            else
                cout<< last10charges[i]<<"  ";
        }
    cout<<endl; 
    cout<< "Total number of deposit: "<<numdeposits<<endl<<endl;
    //cout<< "Total number of withdrawal: "<<numwithdraws<<endl;   
}

CreditCard::CreditCard()
{
    /////////   card no.
    cardnumber=0;
    for(int i=0;i<10;i++)
    {
        last10charges[i]="\0";
    }
}
CreditCard::CreditCard(string name, long id, double amount):Account(name, id, amount)
{

    //////////// card no.
    cardnumber=id;
    for(int i=0;i<10;i++)
    {
        last10charges[i]="\0";
    }
}



