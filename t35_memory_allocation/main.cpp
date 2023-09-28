#include <iostream>

using namespace std;

class Animal{
public:
    Animal(){cout << "constructor" << endl;};
    Animal(const Animal& other):name(other.name) { cout << "copy constructor" << endl; };
    void setName(string new_name){name = (new_name);};
    void speak()const {cout << "name is " << name << endl;};
    ~Animal(){cout << "destructor is called" << endl;}

private:
    string name;
};

int main()
{
    //new can be used on any type
    //we can use array to store multiple data;
    //we need to keep square brackets after delete
    Animal *pAnimal = new Animal();
    Animal *pAnimal_array = new Animal[10];

    pAnimal_array[5].setName("jerry");
    pAnimal_array[5].speak();
    
    int num = 0;
    while (num < 10)
    {
        static char c='a';
        string name(1,c);
        pAnimal_array[num].setName(name);
        pAnimal_array[num].speak();
        num++;
        c++;
    }
    
    delete [] pAnimal_array;
    delete pAnimal;

    char *pmem = new char[1000];
    delete pmem;

    return 0;
}