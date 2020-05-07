
#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Account{
  private:
    string name;
    long taxID; 
    double balance;

  protected:
    int numdeposits;
    int numwithdraws; 

  public:
    void SetName(string str);
    void SetTaxID(long id);
    void Setbalance(double amount);
    string GetName();
    long GetTaxID();
    double Getbalance();
    void MakeDeposit( double amount );
    Account ();
    Account (string name, long id, double amount);
    void display();

};

