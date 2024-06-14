
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
    coefficients_ = new float[other.degree_];
    degree_ = other.degree_;

    for (int i = 0; i < other.degree_ + 1; i++) {
        coefficients_[i] = other.coefficients_[i];
    } 
}

Polynomial::Polynomial(float coefficients[], int degree) {
    coefficients_ = new float[size_];
    degree_ = degree;

    for (int i = 0; i < degree_ + 1; i++) {
        coefficients_[i] = coefficients[i];
    } 
}

Polynomial::Polynomial(int coefficients[], int degree) {
    // Integers and floats 4-Bytes.
    degree_ = degree; 
    coefficients_ = new float[degree_];

    for (int i = 0; i < degree_ + 1; i++) {
        coefficients_[i] = float(coefficients[i]);
    }
}

Polynomial::~Polynomial() { delete[] coefficients_; }

int Polynomial::degree() { return degree_; }

void Polynomial::print() {
    if (degree_ == INT_MAX) printf("0\n"); return;
    for (int i = 0; i < degree_ + 1; i++) {
        printf("%f ", coefficients_[i]);
    }
    printf("\n");
}