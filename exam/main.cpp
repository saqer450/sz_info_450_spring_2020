#include <iostream>
#include <cstring>
#include "account.h"
#include "checking.h"
#include "savings.h"
#include "creditcard.h"
using namespace std;


void printmodule(Savings* sv ,  Checking* ch, CreditCard* crd)
{
    cout<<"Checking balance: $"<< ch->Getbalance()<< " Savings balance: $"<<sv->Getbalance() <<" Credit Card balance: $"<<crd->Getbalance()<<endl;
    cout<<"1. Savings Deposit"<<endl;
    cout<<"2. Savings withdrawal"<<endl;
    cout<<"3. Checking Deposit"<<endl;
    cout<<"4. Write A Check"<<endl;
    cout<<"5. Credit Card Payment"<<endl;
    cout<<"6. Make A Charge"<<endl;
    cout<<"7. Display Savings"<<endl;
    cout<<"8. Display Checking"<<endl;
    cout<<"9. Display Credit Card"<<endl;
    cout<<"0. Exit"<<endl;
}

int main()
{

    Savings* sv = new Savings("Saving", 1001, 100);
    Checking* ch = new Checking("Checking", 1002, 100);
    CreditCard* crd = new CreditCard("Credit", 1003, 100);
    double amount;
    string name;
    int num;

    while(true)
    {
        printmodule(sv, ch, crd);
        string user_input;
        cin>>user_input;
        if(user_input=="0") break;
        else if(user_input=="1")
        {
            cout<<"Enter deposit amount: ";
            cin>>amount;
            sv->MakeDeposit(amount);
        }
        else if(user_input=="2")
        {
            cout<<"Enter withdrawal amount: ";
            cin>>amount;
            sv->DoWithdraw(amount);
        }
        else if(user_input=="3")
        {
            cout<<"Enter deposit amount: ";
            cin>>amount;
            ch->MakeDeposit(amount);
        }
        else if(user_input=="4")
        {
            cout<<"Enter check number: ";
            cin>>num;
            cout<<"Enter cheeck amount: ";
            cin>>amount;
            ch->WriteCheck(num, amount);
        }
        else if(user_input=="5")
        {
            cout<<"Enter payment amount: ";
            cin>>amount;
            crd->MakePayment(amount);
        }
        else if(user_input=="6")
        {
            cout<<"Enter charging name: ";
            cin>>name;
            cout<<"Enter charging amount: ";
            cin>>amount;
            crd->DoCharge(name, amount);
        }
        else if(user_input=="7")
        {
            sv->display();
        }
        else if(user_input=="8")
        {
            ch->display();
        }
        else if(user_input=="9")
        {
            crd->display();
        }
        else
        {
            cout<<"Invalid option. Try again"<<endl;
        }
        
        user_input="\0";

    }


    return 0;
}