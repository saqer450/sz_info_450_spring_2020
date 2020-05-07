#include <iostream>
#include <cstring>
//#include "account.h"
#include "checking.h"
using namespace std;


void Checking::WriteCheck( int checknum, double amount)
{
    if(checknum<0 || amount<=0){cout<<"\nInvalid check\n"<<endl<<endl;}
    else if(Getbalance()<amount){cout<<"\nNot enough balance\n"<<endl;}
    else
    {
        MakeDeposit(amount*(-1));
        for(int i=9;i>0;i--)
        {
            last10checks[i]=last10checks[i-1];
        }
        last10checks[0] = checknum;
        
    }
    
    
}

void Checking::display()
{
    Account::display();
    cout<<"Last ten checknum: ";
    for(int i=0;i<10;i++)
        {
            if(last10checks[i]==-1)break;
            else
                cout<< last10checks[i]<<"  ";
        }
    cout<<endl; 
    cout<< "Total number of deposit: "<<numdeposits<<endl<<endl;
    //cout<< "Total number of withdrawal: "<<numwithdraws<<endl;   
}

Checking::Checking()
{
    for(int i=0;i<10;i++)
    {
        last10checks[i]=-1;
    }
}

Checking::Checking(string name, long id, double amount):Account(name, id, amount)
{
    for(int i=0;i<10;i++)
    {
        last10checks[i]=-1;
    }
}



