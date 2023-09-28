#include <iostream>

using namespace std;

int main()
{

string texts[] = {"ram", "sita" , "lakshman"};

//array varisble name is a pointer. it knows how much data is pointing

string *ptexts = texts;

cout << sizeof(texts)/sizeof(string)<<endl;

//string object is stored in narray, actual string is stored elsewhere.

for (long unsigned int i=0; i<sizeof(texts)/sizeof(string); i++)
{
    cout << texts[i] << " " <<flush;
}
cout << endl;

cout << "pointer arrays by  number "<<endl;
for (long unsigned int i=0; i<sizeof(texts)/sizeof(string); i++)
{
    cout << ptexts[i] << " " <<flush;
}
cout << endl;

cout << "pointer arrays by  address "<<endl;
for (long unsigned int i=0; i<sizeof(texts)/sizeof(string); i++)
{
    cout << *ptexts << " " <<flush;
    ptexts = ptexts + 1; // or use  ptexts++ to go to nexxt string
}
cout << endl;


//creating pointer to start of array and end of the operator

cout << "creating pointer to start of array and end of the operator"<<endl;
string *pelement = texts; //equivalent to &texts[0]
string *pend = &texts[2]; //address of last pointer. [ has higher preference than * so it is equivalent to *(texts[2])

while(true) {
    cout << *pelement << " " << flush;

    if(pelement == pend)
    {
        break;
    }
    pelement++;
}

cout << endl;


return 0;
}