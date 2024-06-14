
#include "./polynomial.h"
#include <stdio.h>
#include <limits.h>

Polynomial::Polynomial() {
    // Creates Null Polynomial.
    data_ = new float[0];
    size_ = 0;
    degree_ = INT_MAX;
}

Polynomial::Polynomial(Polynomial &other) {
    size_ = other.size_;
    data_ = new float[size_];
    degree_ = other.degree_;

    for (int i = 0; i < other.size_; i++) {
        data_[i] = other.data_[i];
    } 
}

Polynomial::Polynomial(float array[]) {
    size_ = sizeof(array) / sizeof(float);
    data_ = new float[size_];
    
    for (int i = 0; i < size_; i++) {
        data_[i] = array[i];
    } 
}

Polynomial::Polynomial(int array[]) {
    // Integers and floats 4-Bytes.
    size_ = sizeof(array) / sizeof(int);
    data_ = new float[size_];

    for (int i = 0; i < size_; i++) {
        data_[i] = float(array[i]);
    }
}

Polynomial::~Polynomial() { delete[] data_; }


int Polynomial::degree() { return degree_; }

int Polynomial::size() { return size_; }


void Polynomial::print() {
    for (int i = 0; i < size_; i++) {
        printf("%f ", data_[i]);
    }
    printf("\n");
}