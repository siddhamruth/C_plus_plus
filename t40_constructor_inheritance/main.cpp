#include <iostream>

using namespace std;

class Machine{
    public:
        Machine():id(0) {cout << "I am  machine" << endl;}
        Machine(int id):id(id) {cout << "I am machine" << endl;}

        void info() {cout << "id is " << id << endl;}
    private:
        int id=0;

};

class Vehicle: public Machine { //subclass
    public: 
        Vehicle(int id):Machine(id){cout << "i am vehicle"<<endl;}
        Vehicle(){cout << "i am vehicle"<<endl;}


};

class Car: public Vehicle{
     public: 
        Car(int id):Vehicle(id){cout << "i am Car"<<endl;};
        Car(){cout << "i am Car"<<endl;}


};

int main(){
    Vehicle vehicle(15);
    vehicle.info();
    Car car(100);
    car.info();
    //constructors are not inheritd in c++
    //we cannot call Car car(15) to make the id as 15 unless the above changes are made
    return 0;
}