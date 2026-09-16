#include <iostream>
using namespace std;

class Employee
{
public:
    int Salary;
    int ID;

    // Parameterized Constructor
    Employee(int i, int s)
    {
        ID = i;
        Salary = s;
    }

    void display()
    {
        cout << "ID = " << ID << "\n";
        cout << "Salary = " << Salary << "\n";
    }
};

int main()
{
    // Initialization during creation ✅
    Employee e1(101, 50000);

    e1.display();

    return 0;
}