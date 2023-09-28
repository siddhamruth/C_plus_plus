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
    if (happy)
    {
        cout << "happpppppyyy meww! " << happy << endl;

    }
    else
    {
        cout << "purrrrr" << happy << endl;
    }
}

Cat::Cat()
{
    cout << "Cat created" << endl;
    happy = true;
}

Cat::~Cat()
{
    cout << "cat is destroyed" << endl;
}