#include<iostream>
using namespace std;

class Base
{
    public:
     int i,j;

     int Addition(int no1, int no2)
     {
        return no1 + no2;
     }

     virtual int Substract(int no1, int no2)=0;
};

class Derived
{
    public:
     int x;
     


};
int main()
{
    Base bobj;     //error        //unimplemented pure virtual methon sub in base
    Derived dobj;   //error    //unimplemented pure virtual methon sub in derived
    return 0;
}