#include <iostream>

using namespace std;

int main()
{
    double value_1 = 7/2; // this does int division and value is 3 not 3.5
    cout << "value_1 is " << value_1 << endl;
    /***********below doesnt work********/
    double value_2 = double(7/2);
    cout << "double value_2 is " << value_2 << endl;
    /***********use this********/
    double value_3 = (double)7/2;
    cout << "double value_3 is " << value_3 << endl;
    return 0;
}