#include <iostream>

using namespace std;

int main()
{
    char text[] = "amruth";
    
    int len = sizeof(text) - 1; //last char is null
    cout << len << endl;

    char *pStart = text;
    char *pEnd = pStart + len -1;
    cout << "pEnd is " << pEnd << endl;

    while (pStart < pEnd)
    {
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;

        pStart++;
        pEnd --;
    }

    cout << "reverse text is " << text << endl;

    return 0;
}