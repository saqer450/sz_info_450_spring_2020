#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;



string reverse (string * s1)
{
   
    int len = s1->length();
    for(int i=0;i<(len/2);i++)
    {

        char temp = (*s1)[i];
        (*s1)[i] = (*s1)[len-1-i];
        (*s1)[len-1-i]  = temp;
    }
    return *s1;
}


int main()
{

    while(true)
    {

         string *str;
         cout<< "Enter a string to reverse: ";
         getline(cin, *str);
         if((*str).compare("")==0)
         {
             break;
         }
         else{
            string s1 = reverse(str);
            cout<< "The reversed string is: "<<s1<<endl;
         }
    }

    return 0;
}