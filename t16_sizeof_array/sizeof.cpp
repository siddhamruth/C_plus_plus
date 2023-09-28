#include <iostream>

using namespace std;

int main()
{
    string  values[] = {"sjfdn", "dfhsbf", "sdfhbs"};
    cout << sizeof(values) << endl; // this will give the size of the array in bytes
    cout << sizeof(string) << endl; // this will give the size of the string in bytes
    for (int i=0; i < (sizeof(values) / sizeof(string)); i++)
    {
        cout << values[i] << endl;
    }
}