#include <iostream>

using namespace std;

class Demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    class Demo dobj;  //writing class not need

    cout<<sizeof(dobj);
    return 0;
}