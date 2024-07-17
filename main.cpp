#include "Library.h"
#include <iostream>

int main() {
    Library library;

    // Create some books
    Book book1 = {"The Catcher in the Rye", "J.D. Salinger", "9780316769488", true};
    Book book2 = {"To Kill a Mockingbird", "Harper Lee", "9780061120084", true};

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);

    // Create a user
    User user1 = {1, "Alice"};
    User user2 = {2, "Bob"};

    // Register users
    library.registerUser(user1);
    library.registerUser(user2);

    // Display books and users
    std::cout << "Books in the Library:" << std::endl;
    library.displayBooks();

    std::cout << "Users in the Library System:" << std::endl;
    library.displayUsers();

    // Borrow a book
    library.borrowBook(1, "9780316769488");

    // Display books and users
    std::cout << "Books in the Library after borrowing:" << std::endl;
    library.displayBooks();

    std::cout << "Users in the Library System after borrowing:" << std::endl;
    library.displayUsers();

    // Return the book
    library.returnBook(1, "9780316769488");

    // Display books and users
    std::cout << "Books in the Library after returning:" << std::endl;
    library.displayBooks();

    std::cout << "Users in the Library System after returning:" << std::endl;
    library.displayUsers();

    return 0;
}
