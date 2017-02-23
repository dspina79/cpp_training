#include "User.h"

using namespace std;

User::User(){
    cout << "User initialized.." << endl;
}

User::User(string username, string password){
    this->username = username;
    this->password = password;

    cout << "User initialized with " << username << endl;
}

void User::setPassword(string password){
    this->password = password;
    
}

bool User::authenticate(string username, string password){
    return this->username == username && this->password == password;
}

User::~User(){
    cout << "User detroyed..." << endl;
}