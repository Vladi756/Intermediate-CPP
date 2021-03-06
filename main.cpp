#include <iostream>

using namespace std;

class Book {                          // A class is the template for a complex data type.
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{

    Book book1("Lord of the Rings", "J.R.R Tolkien", 1241);                         // An object is an actual instance of the blueprint (class) from above.


    /* Multiple objects can be created with the same class. */
    cout << book1.pages << endl;
    cout << book1.author;

    book1.title = "Harry Potter"; // Attributes can still be changes even with constructor.

    return 0;
}

/* Classes are a great way to model real life entities, and a crucial concept that every
C++ developer must understand thouroughly. */
