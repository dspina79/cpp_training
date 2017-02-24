#include <iostream>
#include <string>
#include "ContactInfo.h"

using namespace std;

ContactInfo::ContactInfo(){
    this->FirstName = "";
    this->LastName = "";
    this->Title = "";
    this->Prefix = "";
    this->Suffix = "";

}

ContactInfo::ContactInfo(string firstName, string lastName){
    this->FirstName = firstName;
    this->LastName = lastName;
    this->Title = "";
    this->Prefix = "";
    this->Suffix = "";

}

string ContactInfo::getFullName(){
    string fn = "";

    if(this->Prefix != ""){
        fn += this->Prefix + " ";
    }

    fn += this->FirstName + " " + this->LastName;

    
    if(this->Suffix != ""){
        fn += " " + this->Suffix;
    }

    return fn;

}

ContactInfo::~ContactInfo(){
    cout << "Contact details destroyed" << endl;
}