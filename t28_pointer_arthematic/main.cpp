#include <iostream>

using namespace std;

int main()
{
    const int ELEMENTS = 5 ;
    string texts[ELEMENTS] = {"ram" , "sita" , "lakshman" , "hanuman" , "ravan"};

    string *ptexts = texts;
    cout << *ptexts <<endl;

    ptexts++; // this is ptexts = ptexts+1
    cout << *ptexts <<endl;

    ptexts -= 1;
    cout << *ptexts <<endl;

    string *pStart = &texts[0];
    string *pValue = &texts[0];
    string *pEnd = &texts[ELEMENTS - 1];

    do
    {
        cout << *pValue << " " << endl;
        pValue++;
        /* code */
    } while (*pValue !=  *pEnd);
    
    long elements = pEnd - pStart;

    cout << "number of elemants are : " << elements << endl;

    return 0;
}