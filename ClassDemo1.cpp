#include <iostream>

using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        void display()
        {
            cout<<"inside display\n";   //beheviour no memory
        }


};

int main()
{   
    PPA pobj;

    cout<<sizeof(pobj)<<"\n";
    return 0;
}