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

        
        int Addition()            //object madhe parameter already aale aahe                              // MALL MADLA DUKAN

        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }
};

int main()
{   
    Arthematic aobj1(10, 11);
    int result = 0;
    result = aobj1.Addition();       //caller object 3                              
    cout<<"Addition is : "<<result<<"\n";

   
    return 0;
}

//writing distructior not compulsay

//wet and joy band ex one class 2 object - 



















// naked -  fun in popX- branded shop on road 
// oo- shop in mall ;
