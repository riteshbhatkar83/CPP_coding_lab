#include <iostream>

using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        void display()
        {
            cout<<"inside display\n";   //beheviour no memory in object - text,data,hdfc acoubt manje account - AHITE -NAME - AGE -creating object acount kadlay kadlay ----------------hotel - menuposter is diceleration,, ganpati murti 1 obj 1 tat -2 guest 2 tat,bhaer dandi chatnaydhokda tak la tu maza yachat,,comman bhanda nimbu kanda ,obj.2 sweent,,wati c  sampli ,,comman nimbu sample sttaic -kanda , nimbu , --non static -- hat dhub - bowel distratcer
        }


};

int main()
{   
    PPA pobj;

    pobj.No1 = 11;
    pobj.No2 = 21;

    pobj.display();
    
    cout<<pobj.No1<<"\n";
    cout<<pobj.No2<<"\n";
    return 0;
}