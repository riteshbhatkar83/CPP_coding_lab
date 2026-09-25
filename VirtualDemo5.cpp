#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
      int i , j;

      void fun()
        { cout<<"Base fun\n";}
      
      void gun()
        { cout<<"Base gun\n";}

       virtual void sun()
        { cout<<"Base sun\n";}

       virtual void run()
        { cout<<"Base run\n";}

};  // 16 bytes   // because of compiler comp we get 12

#pragma pack(1)
class Derived : public Base
{
    public:
       int x;

       void fun()
        { cout<<"Derived fun\n";}

        void sun()
        { cout<<"Derived sun\n";}

        virtual void mun()
        { cout<<"Derived mun\n";}

        void bun()
        { cout<<"Derived bun\n";}

};//20 Byted


int main()
{   
    
    Base * bp = new Derived;
    
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    // bp->mun();
    // bp->bun();

    return 0;
}








//example - overrideing - checks overide the amount;
//Base *bp = NULL;
//Derived dobj();      // statically memory allocate stack war memory allocatioon
//bp = &dobj;
//
//Base *bp = new Derived();  //dynamic

//c++ -> and java . (DIREDT ACCESS)
//java all thing in dyamic 

//IN MUN() WE DONT HAVE TO COME BELLOW THERE IS NOT PATH   (WITH OR WITH OUT VIRTAL NO PATH TO COME DOWN)
//VIRTAL MANJWE (PATH TO DOWN)
//(HERE UPCASTIING MATTER COME DOWN)







// SIZEING
// b- VPTR FIRST 8 BYTE - I -  J - KEY SEARCH
// DERIVED - I  J  X

// IN JAVA rmd
// suchthing happen in java in curtain based with c++ you must link with this
