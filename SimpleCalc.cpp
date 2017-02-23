#include<iostream>
#include "SimpleCalc.h"
using namespace std;

SimpleCalc::SimpleCalc(){
    cout << "Calculator initialized" << endl;
}

float SimpleCalc::add(float x, float y){
    return x + y;
}

float SimpleCalc::subtract(float x, float y){
    return x - y;
}

float SimpleCalc::multiply(float x, float y){
    return x * y;
}

float SimpleCalc::divide(float numerator, float denomenator){
    return numerator / denomenator;
}


float SimpleCalc::square(float x){
    return x * x;
}
