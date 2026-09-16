#include <iostream>
using namespace std;

class Book
{
public:
    int pages;
};

int main()
{
    Book b1;
    b1.pages = 200;

    Book b2 = b1;   // automatic copy

    cout << b2.pages;

    return 0;
}