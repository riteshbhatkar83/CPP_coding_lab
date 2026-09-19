#include<iostream>
using namespace std;

class Demo
{ 

public :
    void fun (int no)
    {
        no++;
    }
    void gun (int * p)
    {
        (*p)++;
    }
    void sun(int &x)
    {
        x++;
    }
};

int main()
{   
    Demo dobj;
    int i = 10, j = 10 , k = 10;

    dobj.fun(i);
    cout<<i<<endl;

    dobj.gun(&j);
    cout<<j<<endl;

    dobj.sun(k);
    cout<<k<<endl;

    return 0;
}