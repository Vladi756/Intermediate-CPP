#include <iostream>

using namespace std;

class Book() {                          // A class is the specification - or a blueprint for a complex data type.
    public:
        string title;
        string author;
        int pages;
};

int main()
{

    Book book1;                         // An object is an actual instance of the blueprint (class) from above.
    book1.title = "Lord of the Rings";
    book1.author = "J.R.R. Tolkien";
    book1.pages = 1241;                 // Whole trilogy.

    /* Multiple objects can be created with the same class. */
    cout << book1.pages << endl;
    cout << book1.author;

    return 0;
}

/* Classes are a great way to model real life entities, and a crucial concept that every
C++ developer must understand thouroughly. */
