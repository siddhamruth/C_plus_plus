#include <iostream>

#include "headers_proto_func.h"
using namespace std;


int main()
{
    add(3,4);
    return 0;
}

void add(int a, int b)
{
    cout << a+b << endl;
}