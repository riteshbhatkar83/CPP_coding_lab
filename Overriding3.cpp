#include <iostream>
using namespace std;

// Base class
class Base {
public:
virtual void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};



int main() {

    Base *bp= new Derived();

 //   Derived *bp= new Base(); //downcasting give error


    bp->show();   // function call

    

    return 0;
}

/////Derived class show function


//ue use here virtal keyword