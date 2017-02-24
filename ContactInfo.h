#ifndef CONTACTINFO_H
#define CONTACTINFO_H

#include <iostream>
#include <string>
using namespace std;

class ContactInfo{
    public:
    ContactInfo();
    ContactInfo(string firstName, string lastName);
    string FirstName;
    string LastName;
    string Prefix;
    string Suffix;
    string Title;
    string getFullName();

};

#endif
