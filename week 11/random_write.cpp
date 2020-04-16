#include<fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ofstream file;
    file.open("randoms.txt");

    int iterator =0;
    while(iterator<1000)
    {
        int number = -9999 + rand()%19999;
        file<<number<<endl;
        iterator++;

    }

    return 0;
}