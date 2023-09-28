#include <iostream>

using namespace std;

int main()
{
    //array of chars
    char text_old[] = {'h', 'e', 'l', 'l' ,'o'}; //independent

    char text[] = "hello";

    string text_string = "hello";

    cout << text << endl;

    for (int i=0; i<sizeof(text); i++)
    {
        cout << i << ":" << text[i] << endl;
    }


    return 0;
}