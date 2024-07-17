#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
public:
    int userId;
    std::string name;
    std::vector<std::string> borrowedBooks;

    User();
    User(int userId, std::string name);

    void display();
};

#endif // USER_H
