#include <iostream>
#include <cstring>
#include "account.h"
using namespace std;



class Savings : public Account{
  public:
    void DoWithdraw( double amount);
    Savings();
    Savings(string name, long id, double amount);
    void display(); 
};


