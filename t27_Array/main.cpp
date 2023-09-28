#include <iostream>

using namespace std;

void manipulate(double value)
{
    value  = 10.0;
    cout <<"value is " << value<< endl;

}

void manipulate_via_pointer(double* value){
    *value = 10.0;
    cout << "value of  pointer is "<< value << endl;
    cout << "value in  pointer is "<< *value << endl;



}

int main()
{
    double value = 1.22;
    double* pnvalue = &value;  //this is a pointer to an double 

    /*********Read the pointer declaration fron right to left********/

    cout << "pointer value is " <<pnvalue<<endl;
    cout << "int value is " << value<<endl;
    cout << "int value via pointer is " << *pnvalue << endl; // defferencing
    cout << "1.data " << value << endl;
    manipulate(value);
    cout << "2.data " << value << endl;
    manipulate_via_pointer(&value);
    cout << "3.data " << value << endl;

    return 0;
}