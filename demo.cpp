
#include "./polynomial.h"

int main() {
    float arr[3] = {1, 2, 3};
    Polynomial poly;
    poly.print();

    Polynomial poly2(arr);
    Polynomial poly3(poly2);

    poly2.print();
    poly3.print();
}

