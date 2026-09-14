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

    //Parametrised Constructor   
     PPA(int a, int b)
    {
        cout<<"Inside Parametrised Constructor\n";
    };

    ~PPA()                
    {
        cout<<"Inside Destructor\n";
    };                                                  


};

int main()
{   
    PPA pobj1;             // ha defalf kade
    PPA pobj2(11,21); //  ha para kade challa

   
    return 0;
}