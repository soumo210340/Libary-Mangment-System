#include "Book.h"
#include <iostream>

Book::Book() : isAvailable(true) {}

Book::Book(std::string isbn, std::string title, std::string author, std::string genre)
    : isbn(isbn), title(title), author(author), genre(genre), isAvailable(true) {}

void Book::display() {
    std::cout << "ISBN: " << isbn << "\nTitle: " << title << "\nAuthor: " << author
              << "\nGenre: " << genre << "\nAvailable: " << (isAvailable ? "Yes" : "No") << std::endl;
}
