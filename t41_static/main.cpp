#include <iostream>

using namespace std;

//hfile
class Test{

private:
    static int count;
    static int const MAX = 99;
public:
    static void showInfo(){cout << "from class the data is " << count << endl;};


};

//c++ file
 int Test::count = 7;


int main()
{
    // cout << Test::count << endl;
     Test test;
    Test::showInfo(); //directly calling without object
    return 0;
}