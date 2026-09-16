#include<iostream>
using namespace std;

class Demo 
{
    public:
       int No1;      // non-static
    int No2;      // non-static
    static int X; // static       //nimbu
};

int main()
{
    Demo obj1;
    Demo obj2;

    cout<<sizeof(obj1);

    return 0;
}

// 🔁 So:
// 2 plates (obj1, obj2):
// Each has its own sabzi & roti
// But lemon is common


// 👉 Memory:

// फक्त 1च copy
// Class level वर allocate होते
// सर्व objects share करतात