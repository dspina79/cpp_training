#include "User.h"
#include "ContactInfo.h"
using namespace std;

User::User(){
    cout << "User initialized.." << endl;
    this->contact = ContactInfo("", "");
}

User::User(string username, string password){
    this->username = username;
    this->password = password;
    this->contact = ContactInfo("", "");
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

void User::addContactData(ContactInfo &contact){
    this->contact = contact;
    cout << this->contact.getFullName() << " added." << endl;
}