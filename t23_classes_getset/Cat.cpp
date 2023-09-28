#include <iostream>

#include "Cat.h"

using namespace std;

void Cat::make_happy()
{
    happy = true;
}

void Cat::make_sad()
{
    happy = false;
}

void Cat::speak()
{
    if(happy)
    {
        cout << "happy mewwwww" << endl;
    }
    else{
        cout << "purrrr" << endl;
    }
}

void Cat::setName(string name_set)
{
    name = name_set;
}

string Cat::toString()
{
    return name;
}





Cat::Cat()
{
    cout << "cat is born " <<endl;
}

Cat::~Cat()
{
    cout << "cat is killed" << endl;
}

