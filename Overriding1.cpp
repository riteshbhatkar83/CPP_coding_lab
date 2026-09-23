#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void show() {
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

    Base *bp= new Base(); //No casting

    bp->show();   // function call

    

    return 0;
}


///////////Base class show function