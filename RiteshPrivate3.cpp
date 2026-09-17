//2. Initialize using Constructor (Best Practice)

#include<iostream>
using namespace std;

class Demo
{
private:
    float f;

public:
    Demo()   // constructor
    {
        f = 3.14;   // ✅ initialization here
    }

    void display()
    {
        cout << f;
    }
};

int main()
{
    Demo obj;
    obj.display();
}