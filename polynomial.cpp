
#include "./polynomial.h"
#include <stdio.h>
#include <limits.h>

Polynomial::Polynomial() {
    // Creates Null Polynomial.
    coefficients_ = new float[0];
    degree_ = INT_MAX;
    size_ = 0;
}

Polynomial::Polynomial(Polynomial &other) {
    size_ = other.size_;
    coefficients_ = new float[size_];
    degree_ = other.degree_;

    for (int i = 0; i < other.size_; i++) {
        coefficients_[i] = other.coefficients_[i];
    } 
}

Polynomial::Polynomial(float coefficients[]) {
    size_ = sizeof(coefficients) / sizeof(float);
    coefficients_ = new float[size_];
    
    for (int i = 0; i < size_; i++) {
        coefficients_[i] = coefficients[i];
    } 
}

Polynomial::Polynomial(int coefficients[]) {
    // Integers and floats 4-Bytes.
    size_ = sizeof(coefficients) / sizeof(int);
    coefficients_ = new float[size_];

    for (int i = 0; i < size_; i++) {
        coefficients_[i] = float(coefficients[i]);
    }
}

Polynomial::~Polynomial() { delete[] coefficients_; }


int Polynomial::degree() { return degree_; }

int Polynomial::size() { return size_; }


void Polynomial::print() {
    for (int i = 0; i < size_; i++) {
        printf("%f ", coefficients_[i]);
    }
    printf("\n");
}