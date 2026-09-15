#include<iostream>
using namespace std;

int Addition(int no1 , int no2)   // consider local var
{   
    int ans = 0; // local varable addition  - pan total additino che local variable 3 aahe 
    ans = no1 + no2;

    return ans;  // return the contant of ans in result thaili   // ans he topli aahe bhaji palay wala che     //---------------------->program goes from 9 line to dirct to 20 - 21 - 22
}

int main()
{
    int value1=0, value2=0,result =0;
    cout<<"Enter first number : \n";
    cin>>value1;
    cout<<"Enter sec number : \n";
    cin>>value2;

    result = Addition(value1,value2);

    cout<<"Ans is : "<<result<<"\n";
    return 0;

}

// X for updated
//procedure = function = api(Application programing interface) = method

















//exampple of vdpav table -return value vold he give services, parsal -return value int