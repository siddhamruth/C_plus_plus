#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name = "BOB";
    int age = 27;
    string info = "name is amruth and age is " + age; // this gives error or doesnt print data in age or give segmentation error
    cout << info << endl;

//now lets use sstream string stream library

    stringstream ss;

//you can add any types of strings using this sstringstream

//used in mixed string operations

    ss << "name is amruth ans age is";
    ss << age;

    info = ss.str();
    cout << info << endl;




    return 0;

}