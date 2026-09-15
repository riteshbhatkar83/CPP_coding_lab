#include<iostream>
using namespace std;

class BaseA
{
    public:
        int i,j;

        BaseA()
        {
            cout<<"Inside BaseA constructor\n";
        }

        ~BaseA()
        {
            cout<<"Inside BaseA destructor\n";
        }

        void fun()
        {
            cout<<"Inside BaseA fun\n";
        }
};

class BaseB
{
    public:
        int x,y;

        BaseB()
        {
            cout<<"Inside BaseB constructor\n";
        }

        ~BaseB()
        {
            cout<<"Inside BaseB destructor\n";
        }

        void gun()
        {
            cout<<"Inside BaseB gun\n";
        }
};

class Derived : public BaseA, BaseB   //if not workin next code 
{
    public:
        int a;

        Derived()
        {
            cout<<"Inside Derived constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }

        void sun()
        {
            cout<<"Inside Derived Sun\n";
        }       
};

int main()
{
    Derived dobj;


    return 0;
}