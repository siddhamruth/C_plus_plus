#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int value = 4;

    switch (value)
    {
        case 4:
            cout << "value is 4" << endl;
            break;
        case 5:
            cout << "value is 5" << endl;
            break;      
        default:
            cout << "unrecognized value" << endl;
    }
    return 0;
}