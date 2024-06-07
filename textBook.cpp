#include <iostream>
#include "Book.h"

int main() {
    Book recoBook("Atomic Habits: An Easy & Proven Way to Build Good Habits & Break Bad Ones", "James Clear", "9780735211292");

    cout << "Book Details:" << endl;
    cout << "Title: " << recoBook.getTitle() << endl;
    cout << "Author: " << recoBook.getAuthor() << endl;
    cout << "ISBN: " << recoBook.getISBN() << endl;

    // Test setters
    recoBook.setPublisher("Avery");
    cout << "Publisher: " << recoBook.getPublisher() << endl;

    return 0;
}
