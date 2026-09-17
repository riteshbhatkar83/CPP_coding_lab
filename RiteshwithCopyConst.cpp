#include <iostream>
using namespace std;

class Book
{
public:
    int pages;

    // Default constructor
    Book()
    {
        pages = 0;
    }

    // Copy constructor
    Book(const Book &obj)
    {
        pages = obj.pages;
        cout << "Copy constructor called\n";
    }
};

int main()
{
    Book b1;       // now works ✅
    b1.pages = 200;

    Book b2 = b1;  // copy happens

    cout << b2.pages;

    return 0;
}