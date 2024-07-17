#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    std::string isbn;
    std::string title;
    std::string author;
    std::string genre;
    bool isAvailable;

    Book();
    Book(std::string isbn, std::string title, std::string author, std::string genre);

    void display();
};

#endif // BOOK_H
