#include <string>

#ifndef USER_H
#define USER_H

using namespace std;

class User{
    public:
    User();
    User(string username, string password);
    ~User();
    void setPassword(string password);
    bool authenticate(string username, string password);
    private:
    string username;
    string password;
};


#endif