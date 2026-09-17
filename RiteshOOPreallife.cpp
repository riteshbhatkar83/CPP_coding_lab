/*🧠 What is class PPA in real life?

Think of a class like a template / design / plan.

Example 1: Bank Account 💳
class PPA = Bank account form/design
It tells:
What data? → No1, No2 (like account balance, ID)
What action? → display() (like checking balance)

👉 But class itself has no real existence (no memory).

👤 What is PPA pobj; (object)?

Object is the real thing created from the class.

Example:
PPA pobj; = Actual bank account created
Now memory is allocated:
No1 → stored in memory
No2 → stored in memory

👉 Object = Real entity with memory

📦 Data Members (No1, No2)

These are like properties of a real object.

Example 2: Student 🎓
No1 → Roll number
No2 → Marks

Each object has its own copy:

Student1 → (11, 21)
Student2 → (different values)

👉 So data is non-static → separate for each object

⚙️ Member Function (display())

This is behavior / action.

Example 3: Remote Control 📺
Data → Channel number
Function → Change channel

In your code:

void display()
{
    cout<<"inside display\n";
}

👉 Important:

Function is common for all objects
It is stored once in memory (code segment)


*/










#include <iostream>
using namespace std;

// Class definition (Blueprint / Design)
class PPA
{
    public:
        // Data members (Properties)
        int No1;
        int No2;

        // Member function (Behavior)
        void display()
        {
            cout << "Inside display function\n";
        }
};

int main()
{
    // Object creation (Real entity → memory allocated)
    PPA pobj;

    // Assigning values to data members
    pobj.No1 = 11;
    pobj.No2 = 21;

    // Calling member function
    pobj.display();

    // Printing values
    cout << "No1 = " << pobj.No1 << "\n";
    cout << "No2 = " << pobj.No2 << "\n";

    return 0;
}