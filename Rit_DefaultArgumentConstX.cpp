#include<iostream>
using namespace std;

class Demo
{
  public:
    int x , y;

  //  Demo()
  //  {
  //   x = 0 ;
  //   y = 0 ;
  //  }

  //  Demo(int a)
  //  {
  //   x = a;
  //   y = 0;
  //  }

  //Parameterised Constructor With Default Argument.
   Demo(int a = 0 , int b = 0)
   {
    x = a;
    y = b;
   }
};

int main()
{  
    Demo dobj1;
    cout<<dobj1.x<<endl;
    cout<<dobj1.y<<endl;

    Demo dobj2(11);
    cout<<dobj2.x<<endl;
    cout<<dobj2.y<<endl;

    Demo dobj3(11,21);
    cout<<dobj3.x<<endl;
    cout<<dobj3.y<<endl;

    return 0;
}