#include "User.h"
#include <iostream>

User::User() {}

User::User(int userId, std::string name) : userId(userId), name(name) {}

void User::display() {
    std::cout << "User ID: " << userId << "\nName: " << name << "\nBorrowed Books: ";
    for (const auto &book : borrowedBooks) {
        std::cout << book << " ";
    }
    std::cout << std::endl;
}
