#include <iostream>

using namespace std;

//reference is like pointers
void change(double &value) //this is a reference variable
{
    value = 122.4;

}


int main()
{

int value1 = 8;
int &value2 = value1; //reference variable
value2 = 10; //reference cant have a new memory space. it modifies the address completely

cout << "value1 " << value1 << endl;
cout << "value2 " << value2 << endl;

double value = 4.121;
change(value);

cout << "value is " << value << endl;


return 0;
}