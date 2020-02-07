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
            cout<<"Positive number required"<<endl<<endl;;

        }
        else
        {
            int flag = 0;
            for (int i=2; i<=  number/2; i++)
            {
                if(number%i==0)
                {
                    cout<<"It is not a prime number"<<endl<<endl;
                    flag =1;
                    break;
                }
            }
            if(flag==0)cout<<"It is a prime number"<<endl<<endl;
        }
        cout<<"Please enter a positive number"<<endl;
        
    }

    return 0;
    
}

