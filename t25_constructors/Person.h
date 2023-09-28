#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;


class Person{
    
    private:
        string name;
        int age = 0;
        string place;

    public:

        Person();
        //below is the inline implementation of the c constructor. else you can define it in .cpp line
        //Person(string new_name, int new_age) {name = new_name; age = new_age;}; 
        // Person(string new_name, int new_age);
        //initialize using the lists
        Person(string new_name, int new_age): name(new_name), age(new_age){}
        ~Person();
        string toString();
        void place_from(string place);

};

#endif //PERSON_H