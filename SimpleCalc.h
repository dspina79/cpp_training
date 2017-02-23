#ifndef SIMPLECALC_H
#define SIMPLECALC_H

class SimpleCalc{
    public:
    SimpleCalc();
    float add(float x, float y);
    float subtract(float x, float y);
    float multiply(float x, float y);
    float divide(float numerator, float denomenator);
    float square(float x);
};

#endif