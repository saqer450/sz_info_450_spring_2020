#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;


int main()
{
    string students[30];
    int num_of_students =0;
    for(int i=0;i<30;i++)
    {
         cout<<"Please enter student for index "<<i<<": ";
         string name;
         getline(cin, name);
         if(name.compare("")==0)
         {
             break;
         }
         students[i] = name;
         num_of_students++;
    }

    for(int i=0;i<num_of_students;i++)
    {
         cout<<"students["<<i<<"] = "<<students[i]<<endl;;
    }

    return 0;
}