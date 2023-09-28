#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int value = 50;
    cout << value << endl;

    cout << "max int value" << INT_MAX << endl;
    cout << "min int value" << INT_MIN << endl;

    long int val_long = 21474836470;
    cout << val_long << endl;

    short int val_short = 234;
    cout << val_short << endl;

    cout <<"size of int " << sizeof(int) << endl;
    cout <<"size of short int " << sizeof(short int) << endl;
    cout <<"size of long int " << sizeof(long int) << endl;

    unsigned int uval = 2147483649;  // larger than INT_MAX
    cout << uval << endl;



}