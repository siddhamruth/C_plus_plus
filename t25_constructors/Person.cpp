#include "Person.h"
#include <sstream>

Person::Person(): place(" ")
{
    name = "";
    age = 0;
    
}

Person::~Person()
{

}

string Person::toString()
{
    string info;
    stringstream ss;

    ss << "name is amruth and age is ";
    ss << age;;
    ss << "he is from";
    ss << this->place;
    info = ss.str();
    return info;
}

void Person::place_from(string place)
{
    this->place = place;
}

// Person::Person(string new_name, int new_age): name(new_name), age(new_age){
    
// }