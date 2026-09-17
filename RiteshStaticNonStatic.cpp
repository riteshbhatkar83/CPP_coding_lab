#include<iostream>
using namespace std;

class Demo 
{
    public:
       int No1 = 1;             // non-static
    int No2 = 2;               // non-static
    static int X;             // static       //nimbu

    void fun()
    {
        cout<<No1<<No2<<X<<"\n";
    }

    static void gun()
    {
        cout<<X<<"\n";
    }
};

int Demo :: X =3;

int main()
{   
    cout<<Demo::X;  //3
    Demo::gun();    //3
    Demo obj1;
    Demo obj2;

    cout<<sizeof(obj1); //8
    obj1.fun();          //123
    obj1.gun();          //3

    return 0;
}