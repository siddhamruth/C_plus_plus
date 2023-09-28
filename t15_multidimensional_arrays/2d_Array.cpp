#include <iostream>

using namespace std;
int main()
{
    string animals[2][3] = {          //2 rows and 3 columns //c++ sees like its an array wiyth 6 elements
                                // we can miss out 1st index and declars as animals[][3] = {} but we caannot missout the 2nd index
        {"fox", "dog", "cat"},          //, is needed to be added between 2 rows
        {"mouse", "squirrel", "parrot"} 
    };                                  // needs to end this declaration with a ;

    string data[2][3] = {};

    for (int i = 0; i <2 ; i++) // rows
    {
        for (int j = 0; j<3; j++) //columns
        {
            cout << animals[i][j] << " " << flush; 
            data[i][j] = animals[i][j];                 // the string library allots memory dynamically so we can assign values to it
            // cout << data[i][j] << " " << flush; 
        }

    }
    return 0;
}