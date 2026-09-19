#include<iostream>
using namespace std;

class Demo
{
    public:
        int x , y ;

        Demo()
        {
            this->x = 0;
            this->y = 0;
        }

        Demo(int a, int b)
        {
            this->x = a;
            this->y = b;

        }

        Demo(Demo &ref)
        {
            this->x = ref.x;
            this->y = ref.y;
        }
};

int main()
{   
    Demo dobj1;
    cout<<dobj1.x<<endl;
    cout<<dobj1.y<<endl;

    Demo dobj2(11,21);
    cout<<dobj2.x<<endl;
    cout<<dobj2.y<<endl;

    Demo dobj3(dobj2);
    cout<<dobj3.x<<endl;
    cout<<dobj3.y<<endl;


    return 0;
}