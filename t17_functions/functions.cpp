#include <iostream>
#include <iomanip>

using namespace std;


void showMenu() // use  1 st letter of each word as capital letter and start with small letter
{
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
}

void compute(int input)
{
    switch(input)
    {
        case 1:
            cout << "Searching..." << endl;
            break;
        case 2:
            cout << "Viewing..." << endl;
            break;
        case 3:
            cout << "Quitting..." << endl;
            break;
        default:
            cout << "rerun code and enter a valid number" << endl; //this is a default case
    }
}

int process_Selection()
{
    cout << "enter the selections" << flush;
    int input;
    cin >> input;
    return input; // we can return double float or strings etc
}

int main()
{
    //c++ uses classes that has data and functions
    //c uses functions
    showMenu();
    int in_val = process_Selection();
    compute(in_val);

    return 0;
}