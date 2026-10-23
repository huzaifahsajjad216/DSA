#include <iostream>

#include "LibraryItem.h"
#include "Library.h"

using namespace std;

int main()
{
    // Create book objects

    Book book1(
        "The Catcher in the Rye",
        "J.D. Salinger",
        277
    );

    Book book2(
        "To Kill a Mockingbird",
        "Harper Lee",
        324
    );


    // Create newspaper objects

    Newspaper newspaper1(
        "Washington Post",
        "2024-10-13",
        "Morning Edition"
    );

    Newspaper newspaper2(
        "The Times",
        "2024-10-12",
        "Weekend Edition"
    );


    // Create Library object

    Library library;


    // Add books

    library.addBook(book1);

    library.addBook(book2);


    // Add newspapers

    library.addNewspaper(newspaper1);

    library.addNewspaper(newspaper2);


    // Display collection before sorting

    cout << "Before Sorting:" << endl;

    library.displayCollection();


    // Sort books by pages

    library.sortBooksByPages();


    // Sort newspapers by edition

    library.sortNewspapersByEdition();


    // Display collection after sorting

    cout << "\nAfter Sorting:" << endl;

    library.displayCollection();


    // Search book by title

    Book* foundBook =
        library.searchBookByTitle(
            "The Catcher in the Rye"
        );


    if (foundBook)
    {
        cout << "\nFound Book:" << endl;

        foundBook->display();
    }
    else
    {
        cout << "\nBook not found." << endl;
    }


    // Search newspaper by name

    Newspaper* foundNewspaper =
        library.searchNewspaperByName(
            "The Times"
        );


    if (foundNewspaper)
    {
        cout << "\nFound Newspaper:" << endl;

        foundNewspaper->display();
    }
    else
    {
        cout << "\nNewspaper not found." << endl;
    }


    return 0;
}