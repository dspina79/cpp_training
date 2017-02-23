
#include <iostream>
#include <string>
#include "User.cpp"
#include "SimpleCalc.cpp"

using namespace std;


int main(){

    cout << "Hello User! " << endl;
    User u("joeuser", "password");
    u.setPassword("newPassword@@");

    cout << "Result of (joeuser, password) auth check: " << u.authenticate("joeuser", "password") << endl;
    cout << "Result of (joeuser, newPassword@@) auth check: " << u.authenticate("joeuser", "newPassword@@") << endl;

    SimpleCalc calc;
    float x = 16;
    float y = 2;

    cout << "Result of " << x << " + " << y << " = " << calc.add(x, y) << endl;
    cout << "Result of " << x << " - " << y << " = " << calc.subtract(x, y) << endl;
    cout << "Result of " << x << " * " << y << " = " << calc.multiply(x, y) << endl;
    cout << "Result of " << x << " / " << y << " = " << calc.divide(x, y) << endl;    
    cout << "Result of " << x << " squared = " << calc.square(x) << endl;
    
    return 0;
}
