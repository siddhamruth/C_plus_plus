#include <iostream>

using namespace std;


class Animal
{
    public:
        Animal() {cout << "animal is created" << endl;};
        /**below changes copy constructor and this doesnt work***/
        //Animal(const Animal& /*const animal reference*/ ){ cout << "copy constructor "<< endl;}; 
        /**below works***/
        Animal(const Animal& other/*const animal reference*/ ):name(other.name) { cout << "copy constructor "<< endl;}; 
        //no methods from other can be called in copy construtor. only u can copy data from it.
        //you cant call a non const methods from a cost other so u can call speak but not setname
        void setName(string name){this->name = name;};
        void speak() const {cout << " name is " << name<< endl;};
        
    private:
        string name;

};

int main()
{

Animal dog;
dog.setName("ace");

Animal cat = dog; // here the copy constructor is invoked rather than the main constructor
cat.speak(); //here you have overwritten the copy constructt and didnt initialize add name = other.name or :name(other.name)in the copy constructor to make it work

cat.setName("bob");


dog.speak();
cat.speak();

Animal rat(cat);
rat.speak();

return 0;
}