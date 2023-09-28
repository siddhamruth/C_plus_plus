#include <iostream>
using namespace std;

int main()
{
    string password = "hello";
    cout << "enter your password" << flush;
    string input;
    cin >> input;

    cout << "ypur password is " + input << endl; // input is worling

    if(input == password)
    {
        cout << "passeord is correct" <<endl;
    }
    else
    {
        cout << "wrong password" << endl;
    }

    return 0;
}