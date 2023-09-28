#include <iostream>

using namespace std;
namespace cats{

class Cat {
    public:
        Cat(string new_name) {name = new_name;};
        void speak();
    private:
        string name;
};
}