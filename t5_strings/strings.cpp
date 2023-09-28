#include <iostream>

using namespace std;

int main()
{
    string value = "this is a string"; 
    string value2 = "added value2";

    //value object
    //string is a class
    //int is primitive type
    //string is not a primitive type

    cout << value << value2 << endl;
    cout <<value + " " + value2 <<endl; // + is only used for string concatenation cant use in int or any other datatype
    cout << value.length() << endl; // length is a method of string class
}