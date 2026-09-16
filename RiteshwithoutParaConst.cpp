#include <iostream>
using namespace std;

class Employee
{
public:
    int Salary;
    int ID;

    void display()
    {
        cout << "ID = " << ID << "\n";
        cout << "Salary = " << Salary << "\n";
    }
};

int main()
{
    Employee e1;

    // Manual initialization ❌
    e1.ID = 101;
    e1.Salary = 50000;

    e1.display();

    return 0;
}