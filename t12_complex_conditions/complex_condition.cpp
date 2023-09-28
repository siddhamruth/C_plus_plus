#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "enter value " << flush;
    int value1;

    cin >> value1;
    if (value1 >= 5 || value1 <= 10) //c++ evaluatess from left to right always
    {
        cout << "data is between 5 to 10" << endl;
    }
    else
    {
        cout << "condition 1: false" << endl;
    }

    //using a 3rd variable for condition

    bool condition1 = (value1 >= 5 || value1 <= 10) && value1 == 8;

    if (condition1)
    {
        cout << "condition 1: true" << endl;
    }
    else
    {
        cout << "condition 1: false" << endl;
    }

    return 0;
}