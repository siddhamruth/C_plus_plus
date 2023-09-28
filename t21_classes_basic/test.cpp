#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{
    Cat kitten; // kitten is a object of class Cat
    Cat tommy;   //tommy is a object of cat
 

    kitten.make_happy();
    kitten.speak();

    tommy.make_sad();
    tommy.speak();


    return 0;

}