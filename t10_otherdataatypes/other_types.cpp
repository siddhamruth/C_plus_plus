
#include <iostream>

using namespace std;

int main()
{
    bool bValue =true;
    cout << bValue <<endl;
    cout << sizeof(bool) << endl;

    char cvalue = 'a';
    cout <<cvalue << endl;
    cout <<sizeof(char) << endl;


    char cvalue2 = 98;   //stores the aascii value of 55 in the variable but not the value 55 65 --A 97 --a
    cout <<cvalue2 << endl;
    cout <<sizeof(char) << endl;

}