#include<iostream>
using namespace std;
 
class Arthematic 
{
    public :                   
        int no1;
        int no2;

        Arthematic()                                            
        {
          this->no1 = 0;
          this->no2 = 0;
        }

        Arthematic(int i , int j)
        {
            this->no1 = i;
            this->no2 = j;
        }

        //int Addition(Arthematic *this)
        int Addition()  
        {          
            int ans = 0;
            ans =this->no1 + this->no2;
            return ans;
        }

        //int Substraction(Arthematic *this)
        int Substraction()  
        {          
            int ans = 0;
            ans =this->no1 - this->no2;
            return ans;
        }
    };

int main()
{   
    Arthematic aobj1(21, 10);
    int result = 0;

    //result = Addition(&aobj1);
    result = aobj1.Addition();                                    
    cout<<"Addition is : "<<result<<"\n";

   //result = Substraction(&aobj1);
    result = aobj1.Substraction();                              
    cout<<"Substraction is : "<<result<<"\n";
    return 0;
}

