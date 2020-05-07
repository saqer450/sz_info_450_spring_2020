#include <iostream>
#include <cstring>
#include "account.h"
using namespace std;


class Checking : public Account{
  private: 
    int last10checks[10]; 
    
  public:
    void WriteCheck( int checknum, double amount); 
    Checking();
    Checking(string name, long id, double amount);
    void display(); 
};


