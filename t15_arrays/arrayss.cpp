#include <iostream>

using namespace std;

int main()
{
    int temp_[5] ;            // this is not initializing the array to 0
    int values[5] = {};     // this is initializing th complete array to 0
    int values_no_number[] = {1,2,3,4}; // here the number of elements in array is not told before
    string texts[] = {"one", "two", "three"}; // this is array of string. u can have any type  in an array
    values[0] = 6;

    for (int i=0; i<5; i++)
    {
            cout << "values" << values[i] << endl;
            // cout << "temp" + temp_[i] << endl; // + is string concat only dont work if u add integer. you will get a segmentation fault here
            cout << "temp" << temp_[i] << endl; // << is used to print 2 different values
    }
}