#include <iostream>

using namespace std;

class Frog{
public:
    Frog(string name): name(name){}
    // Frog(string name){this->name = name; cout<<"name is " << this->name << endl;};
    string getname(){return name;};
private:
    string name="";
};


int main()
{
    Frog f1("fuggyss"); //hide the name variables and encapsulate them to make sure that no one edits this
    cout<<f1.getname()<<endl;

    return 0;
}