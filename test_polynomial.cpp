
#include <gtest/gtest.h>
#include <limits.h>
#include "./polynomial.h"


TEST(Polynomial, DefaultConstructor) {
    Polynomial poly1;
    ASSERT_EQ(INT_MAX, poly1.degree());
    ASSERT_EQ(0, poly1.size());
}

TEST(Polynomial, CopyConstructor) {
    Polynomial poly1;
    Polynomial poly2(poly1);
    ASSERT_EQ(poly1.degree(), poly2.degree());
    ASSERT_EQ(poly1.size(), poly2.size());
}
