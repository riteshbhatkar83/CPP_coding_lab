//Use a Public Function (not getter/setter style), but here f initilize directly

#include<iostream>
using namespace std;

class Demo
{
private:
    float f = 3.14;

public:
    void display()
    {
        cout << f;   // accessing private float inside class
    }
};

int main()
{
    Demo obj;
    obj.display();   // ✅ indirect access
    return 0;
}