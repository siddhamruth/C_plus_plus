#include <iostream>

using namespace std;

class Animal{
    public:
        void speak(){cout << "I am an animal" << endl;}; 
}; //supercalss

class Cat: public Animal{
 //here the Cat is same as Animal
 public: 
    void jump(){cout << "i am jumping" << endl;};
};


int main()
{

Animal A1;
Cat A2;
A2.speak();
A2.jump();

return 0;
}