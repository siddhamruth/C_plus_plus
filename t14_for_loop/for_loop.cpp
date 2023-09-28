#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for(int i=0;i<10;i++)
    {
        cout << "hello" << i << endl;
        if(i==2)
        {
            continue; //no going to next condition after continue. the code starts from the beginning of the loop again
        }

        if(i>5)
        {
            cout << "breaking" <<endl;
            break;
        }

        cout << "data is looping" << endl;

    }
    return 0;
}