#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "User.h"
#include <vector>
#include <map>
#include <string>
class Library {
public:
    void addBook(const Book &book);
    void deleteBook(const std::string &isbn);
    void updateBook(const std::string &isbn, const Book &newBook);
    void searchBook(const std::string &isbn);
    void registerUser(const User &user);
    void borrowBook(int userId, const std::string &isbn);
    void returnBook(int userId, const std::string &isbn);
    void displayBooks() const;
    void displayUsers() const;

private:
    std::vector<Book> books;
    std::map<std::string, Book> isbnBookMap;
    std::vector<User> users;
    std::map<int, User> userIdMap;
};

#endif // LIBRARY_H
