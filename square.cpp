#include<cstdio>
#include<iostream>
using namespace std;


int main()
{
    int number;
    cout<<"Please enter a positive number:"<<endl;
    while(cin>>number)
    {
    
        if (number==0)
        {
            break;
        }
        else if (number<0)
        {
            cout<<"Positive number required"<<endl<<endl;

        }
        else
        {
            number = number * number;
            cout<< "The squared value is: "<< number << endl<<endl;
        }
        cout<<"Please enter a positive number"<<endl;
        
    }

    return 0;
    
}