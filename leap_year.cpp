#include<cstdio>
#include<iostream>
using namespace std;


int main()
{
    int number;
    cout<<"Please enter a year:"<<endl;
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
            if((number%4 !=0) || ((number % 100==0) && (number % 400 != 0)))
            {
                cout << "It is not a leap year" <<endl<<endl;
            }
            else
            {
                cout<< "It is a leap year"<<endl<<endl;
            }
            
        }
        cout<<"Please enter a year"<<endl;
        
    }

    return 0;
    
}