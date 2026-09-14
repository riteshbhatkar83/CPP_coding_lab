#include <iostream>

using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

    //Default Constructor    
    PPA()
    {
        cout<<"Inside Default Constructor\n";
    };
    //    
    ~PPA()                //til da
    {
        cout<<"Inside Destructor\n";
    };                                                  


};

int main()
{   
    PPA pobj1;
    PPA pobj2;

   
    return 0;
}