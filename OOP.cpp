#include<iostream>
using namespace std;
 
class Arthematic 
{
    public :                    // public nahi liha la t pivate
        int no1;
        int no2;

        Arthematic()                                            //pav bhaji
        {
            no1 = 0;
            no2 = 0;
        }

        Arthematic(int i , int j)
        {
            no1 = i;
            no2 = j;
        }
};

int main()
{   
    Arthematic aobj1;
    Arthematic aobj2 (10, 11);

    cout<<aobj1.no1<<"\n";
    cout<<aobj1.no2<<"\n";

    cout<<aobj2.no1<<"\n";
    cout<<aobj2.no2<<"\n";

    return 0;
}

//writing distructior not compulsay





















// naked -  fun in popX- branded shop on road 
// oo- shop in mall ;
