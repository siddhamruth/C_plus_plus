#ifndef CAT_H_
#define CAT_H_

#include <iostream>

using namespace std;
class Cat
{
    public:
        Cat();
        ~Cat();
        void make_happy();
        void make_sad();
        void speak();
        void setName(string name_set);
        string toString();
    private:
        bool happy = true;
        string name;
};

#endif //CAT_H