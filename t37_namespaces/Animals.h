#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;


namespace pvg{
class Cat {
    public:
        Cat(string name){this->name = name;};
        void speak();

    private:
        string name;
};

} // namespace end

#endif /*ANIMALS_H_*/