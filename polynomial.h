
#pragma once

#include <vector>

class Polynomial {

private:
    float* coefficients_;
    int degree_;

public:
    // Default-Constructor.
    Polynomial();

    // Copy-Constructor (for Polynomial object).
    Polynomial(Polynomial &other);
    
    // Copy-Constructor (for array of coefficients (floats)).
    // Polynomial(float coefficients[], int degree);
    Polynomial(std::vector<float> coefficients);
    
    // Copy-Constructor (for array of coefficients (integers)).
    Polynomial(int coefficients[], int degree);

    ~Polynomial();

    // Returns the degree of the polynom.
    int degree();
    
    // Prints Polynomial.
    void print();
};
