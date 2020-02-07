#include<iostream>
using namespace std;

const double PI = 3.1415;

double calculateCircumference(double radius);

int main()
{
    double radius;
    cout<< "Please enter the radius of the circle."<<endl;
    cin>> radius;
    cout<< "The Circumference is: "<< calculateCircumference(radius)<<endl;
    return 0;

}

double calculateCircumference(double radius)
{
    return 2*PI*radius;
}