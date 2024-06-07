#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    string publisher;

public:
    Book(string title, string author, string isbn);
    string getTitle() const;
    string getAuthor() const;
    string getISBN() const;
    string getPublisher() const;
    void setTitle(const string& title);
    void setAuthor(const string& author);
    void setISBN(const string& isbn);
    void setPublisher(const string& publisher);
};

#endif
