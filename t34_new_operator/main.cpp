#include <iostream>
using namespace std;

class Animal
{
public:
    Animal(){cout << "constructor" << endl;};
    Animal(const Animal& other):name(other.name) { cout << "copy constructor" << endl; };
    void setName(string new_name){name = (new_name);};
    void speak()const {cout << "name is " << name << endl;};
    ~Animal(){cout << "destructor is called" << endl;}

private:
    string name;
};

Animal createAnimal() {
    Animal a;
    a.setName("RB_1");
    a.speak();
    return a;
}

Animal& createAnimal_ref(){
    Animal b;
    Animal &a = b;
    a.setName("RB_1");
    a.speak();
    return a; //reference object a no longer exist as it eill be deleted from memory after }


}

Animal *CreateAnimal_new()
{
    Animal *p = new Animal();
    p->setName("neww_tommy");
    return p;

}

int main()
{
    Animal dog;
    dog.setName("bunny");
    dog.speak();

    //create a class using new
    Animal *pcat = new Animal(); //need to destroy the object after come time;

    //*pcat.setName("daarky"); //will not work as . has higher precedence than * operator.
    //(*pcat).setName("darkyy"); //will work but hard syntax
    pcat->setName("daarky");

    pcat->speak();

    delete pcat; //delete will deallocate memory of pointer pcat. if u call this on a pointer which has not det then code will randomlly crash

    //create an animal ffrog using function
    Animal frog = createAnimal(); //WORKS but INEFFECIANT

    //CREATE THE FUNCTION USING REFERENCE FROM THE createAnimal_ref
    Animal frog_2 = createAnimal_ref(); //DOESNT WORK
    frog_2.speak();

    //CREATE the function using pointer reference
    Animal *frog3 = CreateAnimal_new();
    frog3->speak();
    delete frog3;


    cout<<"below is the end of the function" << endl;
    return 0;
}