#include <iostream>
using namespace std;

class Base {
public:
    int x;

    Base() {
        x = 100;
    }
};

int main() {
    Base *obj = new Base();   // dynamic object       

    cout << "Value = " << obj->x << endl;

    delete obj;   // free memory
    return 0;
}


// 🔸 Output
// Value = 100