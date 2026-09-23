#include <iostream>
using namespace std;

int main() {

//     ✔ Dynamic memory allocation for a primitive data type (int)
// ❌ NOT object creation
    int *p = new int;   // allocate memory for int

    *p = 10;            // assign value

    cout << "Value = " << *p << endl;

    delete p;           // free memory
    return 0;
}

// 🔹Output (Primitive Data Type)
// Value = 10


