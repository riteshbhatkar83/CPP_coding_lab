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
    
    Base obj;   // ✅ static object (no dynamic memory)

    cout << "Value = " << obj.x << endl;

    return 0;
}