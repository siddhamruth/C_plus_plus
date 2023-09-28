#include <iostream>

using namespace std;

void show1(int n , string texts[]) //void show1(int n , string *texts) this iss same as the one which is not commented
{
    cout << sizeof(texts)<< endl;

    for(int i=0;i<n;i++)
    {
        cout << texts[i] <<endl;
    }
}
void show2(string (&texts)[3] ) //array of references and its  string reference. round brackets are iimportant. if u write different number insted of 3  then the compiler doesnt compile
{
    cout << sizeof(texts)<< endl;

    for(int i=0;i < (sizeof(texts)/sizeof(string)) ;i++)
    {
        cout << texts[i] <<endl;
    }
}

//returning an array from a pointer

string * get_array()
{
    string texts[] = {0,1,2,3};
    return texts;
}
int main()
{
    string texts[] = {"apple", "banana", "goa"};
    cout << sizeof(texts)<< endl;

    //show1(sizeof(texts)/sizeof(string), texts);
    show2(texts);
    return 0;

}