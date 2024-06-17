
#include "./polynomial.h"
#include <stdio.h>
#include <limits.h>

Polynomial::Polynomial() {
    // Creates null polynomial.
    coefficients_ = new float[0];
    degree_ = INT_MAX;
}

Polynomial::Polynomial(Polynomial &other) {
    coefficients_ = new float[other.degree_ + 1];
    degree_ = other.degree_;

    for (int i = 0; i < other.degree_ + 1; i++) {
        coefficients_[i] = other.coefficients_[i];
    } 
}

Polynomial::Polynomial(std::vector<float> coefficients) {
// Polynomial::Polynomial(float coefficients[], int degree) {
    degree_ = coefficients.size() - 1;
    coefficients_ = new float[degree_+1];

    for (int i = 0; i < degree_ + 1; i++) {
        coefficients_[i] = coefficients[i];
    } 
}

Polynomial::Polynomial(int coefficients[], int degree) {
    // Integers and floats 4-Bytes.
    degree_ = degree; 
    coefficients_ = new float[degree_ + 1];

    for (int i = 0; i < degree_ + 1; i++) {
        coefficients_[i] = float(coefficients[i]);
    }
}

Polynomial::~Polynomial() { delete[] coefficients_; }

int Polynomial::degree() { return degree_; }

void Polynomial::print() {
    if (degree_ == INT_MAX) printf("(Nullpolynom) 0\n"); return;
    for (int i = 0; i < degree_ + 1; i++) {
        printf("%f ", coefficients_[i]);
    }
    printf("\n");
}