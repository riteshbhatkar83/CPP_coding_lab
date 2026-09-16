#include<iostream>
using namespace std;

 class Demo
 {
    public:
    int No1;
    int No2;
    static int X;


    Demo(int i, int j)
    {
        No1 = i;
        No2 = j;

    }

    void fun()
    {
        cout<<"Inside fun\n";
        cout<<No1<<"\n";
        cout<<No2<<"\n";
        cout<<X<<"\n";

    }

    static void gun()
    {
        cout<<"Inside gun \n";
        cout<<X<<"\n";

    }
 };

 int Demo :: X = 11; 
 
//   👉 Static variable needs:

// Declaration (inside class)
// Definition (outside class)

 int main()
{
    cout<<Demo::X<<"\n";

    Demo::gun();
    //if we want to run fun function firet create object of Demo then call fun like ->  Demo obj(10, 20);  ->obj.fun()


    return 0;
}


// Static variable → one copy
// Static function → no object needed  to access
// Static function → can access only static data

// 👉 Non-static function:
// ✔️ Can access non-static members
// ✔️ Can also access static members

// 🔹 Static function (gun())
// ✔️ Can access static members only (X)
// ❌ Cannot access non-static members (No1, No2)



/*

💻 This line:
int Demo::X = 11;
🧠 What it means

👉 This is definition + initialization of static variable

🔍 Break it
🔹 int

👉 Data type

🔹 Demo::X

👉 Means:
👉 X belongs to class Demo

:: → scope resolution operator
Tells compiler:
👉 “X is inside Demo class”
🔹 = 11

👉 Initial value of static variable

🔥 Why we write this outside class?

Inside class:

static int X;

👉 Only declaration

Outside class:

int Demo::X = 11;

👉 Memory allocation happens here ✔️


*/