#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while(i < 5)
    {
        cout << "hello" << endl;
        i++;
    }
    // return 0;

    string password = "12345678";

    do{
        cout << "enter your password" << flush;
        string input;
        cin >> input;

        if(password == input)
            {
                cout <<"it is right password" << endl;
                break;
            }
        else
            {
                cout << "wrong password" << endl;
            }
    }while(true);

    return 0;

}