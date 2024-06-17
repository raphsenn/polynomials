
#include <gtest/gtest.h>
#include <limits.h>
#include "./polynomial.h"


TEST(Polynomial, DefaultConstructor) {
    Polynomial poly1;
    ASSERT_EQ(INT_MAX, poly1.degree());
}

TEST(Polynomial, CopyConstructorPolynom) {
    Polynomial poly1;
    Polynomial poly2(poly1);
    ASSERT_EQ(poly1.degree(), poly2.degree());
}

TEST(Polynomial, CopyConstructorArray) {
    Polynomial poly1({1, 2, 3});
    // Polynomial poly1((float[]){1, 2, 3}, 2);
    ASSERT_EQ(2, poly1.degree());

    Polynomial poly2({1, 2, 3, 4, 5, 6});
    // Polynomial poly2((float[]){1, 2, 3, 4, 5, 6}, 5);
    ASSERT_EQ(5, poly2.degree());
}

TEST(Polynomial, CopyConstructorPolynomAndArray) {
    Polynomial poly1({1, 2, 3});
    // Polynomial poly1((float[]){1, 2, 3}, 2);
    Polynomial poly2(poly1); 
    
    ASSERT_EQ(2, poly2.degree());
}