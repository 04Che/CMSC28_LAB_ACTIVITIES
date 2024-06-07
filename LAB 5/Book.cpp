#include "Book.h"

Book::Book(string title, string author, string isbn)
: title(title), author(author), ISBN(isbn) {}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getISBN() const {
    return ISBN;
}

string Book::getPublisher() const {
    return publisher;
}

void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setISBN(const string& isbn) {
    ISBN = isbn;
}

void Book::setPublisher(const string& publisher) {
    this->publisher = publisher;
}
