#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    float fval = float(80.312121221222);

    cout << fixed << fval << endl;
    cout << scientific << fval << endl;
    cout << sizeof(float) << endl;
    cout << setprecision(1) << fixed << fval << endl;


    return 0;

}
