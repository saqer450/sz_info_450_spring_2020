#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int number[10];
    float sum=0;
    float mean;
    float stddev;

    for (int i=0;i<10;i++)
    {
        cout<<"Enter the number for index "<<i<<": ";
        cin >> number[i];
        sum += (float)number[i];
    }
    mean = sum/10.0;
    sum =0;

    for (int i=0;i<10;i++)
    {
        number[i] -= mean;
        number[i] *= number[i];
        sum += (float)number[i]; 
    }

    stddev = sum/10.0;
    stddev = sqrt(stddev);
    cout<< "results, "<<mean<<", "<<stddev<<endl;
    return 0;
}