#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{

    Cat tom;

    tom.make_happy();
    tom.speak();
    tom.setName("ramesh");
    string name = tom.toString();
    cout << "my name is " << name <<endl;
     //getters and setters are methods to set the values in c++
     
    
    return 0;
}