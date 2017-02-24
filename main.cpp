
#include <iostream>
#include <string>
#include "User.cpp"
#include "SimpleCalc.cpp"
#include "ContactInfo.cpp"

using namespace std;
void doCalDemo();
void doUserClassDemo();

int main(){

    doUserClassDemo();

    return 0;
}

void doUserClassDemo(){
        cout << "Hello User! " << endl;
    User u("joeuser", "password");
    u.setPassword("newPassword@@");

    ContactInfo c("Joseph", "User");
    c.Prefix = "Mr.";

    u.addContactData(c);

    cout << "Result of (joeuser, password) auth check: " << u.authenticate("joeuser", "password") << endl;
    cout << "Result of (joeuser, newPassword@@) auth check: " << u.authenticate("joeuser", "newPassword@@") << endl;

}

void doCalDemo(){

    SimpleCalc calc;
    float x = 16;
    float y = 2;

    cout << "Result of " << x << " + " << y << " = " << calc.add(x, y) << endl;
    cout << "Result of " << x << " - " << y << " = " << calc.subtract(x, y) << endl;
    cout << "Result of " << x << " * " << y << " = " << calc.multiply(x, y) << endl;
    cout << "Result of " << x << " / " << y << " = " << calc.divide(x, y) << endl;    
    cout << "Result of " << x << " squared = " << calc.square(x) << endl;

}