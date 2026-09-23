#include <iostream>
using namespace std;

//Redefination

// Base class
class Base {
public:
    int i , j;
    void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int x;
    void show() {
        cout << "Derived class show function" << endl;
    }
};



int main() {

    Base *bp= new Derived();  //upcasting

    bp->show();   // function call

    

    return 0;
}

////////////Base class show function




// 🔥 Answer (Core Concept)

// 👉 Because you did NOT use virtual keyword

// 🔸 What your code does
// Base *bp = new Derived();
// bp->show();

// 👉 Yes:

// Object = Derived ✅
// Pointer = Base ✅

// 👉 BUT:

// ❌ Function call is decided using pointer type (Base)
// ❌ Not object type

// 🔹 Why this happens?

// 👉 Because:

// Compile-Time Binding (Early Binding)

// 👉 Compiler sees:

// Base *bp

// 👉 So it decides:

// Call Base::show()
// 🔥 Key Rule

// 👉 Without virtual → compiler uses pointer type