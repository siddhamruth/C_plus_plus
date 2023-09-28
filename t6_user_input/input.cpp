#include <iostream>
#include <unistd.h>

using namespace std;

int main ()
{
    cout << "enter your name: " << flush; //wht is flush? ans: flush is a manipulator. it sends the output to the screen immediately else the code waits till endl comes and then its sent out to display.
    // usleep(500000);
    // cout << "now";
    string user_input;
    cin >> user_input;  //>> is extracting operator>
    cout << "you entered  " << user_input << endl;

    return 0;
}