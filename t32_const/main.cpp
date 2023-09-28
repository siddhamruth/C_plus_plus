#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal(){};
        Animal(string new_name):name(new_name){};
        void setName(string name){ this->name = name;};
        /****Below is the good practice***/
        void speak() const {cout << "my name is " << name << endl;};//indeclaration this const will not allow any changes in name functiion

    private:
        string name;

};

int main()
{
    const double PI = 3.141592;
    cout << PI << endl;

    Animal dog;
    dog.setName("ace");
    dog.speak();

    int value_1 = 8;
    const int *pvalue_1 = &value_1; //read backwards. its pointer to an int. so u cant change the integer 

    cout << *pvalue_1 << endl;

//try t change value here
    //*pvalue_1 = 9; //this gives error

    int value_2 = 33;
    int const *pvalue_2 = &value_2; //read backwards. its pointer to a pointer. so u cant change the address to which this points 
    int number =155;
    pvalue_2 = &number;



    cout<< *pvalue_2 << endl;







    return 0;
}