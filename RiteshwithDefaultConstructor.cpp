#include <iostream>
using namespace std;

class Employee
{
public:
    int Salary;
    int ID;

    // Default constructor
    Employee()
    {
        Salary = 99; //normally it initilaize with 0
        ID = 20;
    }
};

int main()
{
    Employee e1;  // constructor runs automatically

    cout << e1.Salary << endl;  // 0 ✅
    cout << e1.ID << endl;      // 0 ✅

    return 0;
}