#include <iostream>
using namespace std;

class Employee
{
public:
    int Salary;
    int ID;
};

int main()
{
    Employee e1;

    cout << e1.Salary << endl;  // garbage ❌
    cout << e1.ID << endl;      // garbage ❌

    return 0;
}