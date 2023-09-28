#include <iostream>
#include "Person.h" // not a standard header

using namespace std;

int main()
{
    Person p1;
    Person p2("ramesh" , 27);



    //we can define name when u define a object of the class itself using constructor overloading.
    //creating object means instantiation of the class


    cout << p2.toString() << endl; //this is used here

    //lets see hoe to use this 

    p2.place_from(" banglore2");

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;


    cout << "memory location p1" << &p1 << endl;
    cout << "memory location of p2 " << &p2 << endl;


    return 0;
}