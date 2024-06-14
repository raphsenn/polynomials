
#include "./polynomial.h"
#include <stdio.h>

int main() {
    float arr[3] = {1, 2, 3};
    Polynomial poly;
    poly.print();

    Polynomial poly2(arr, 2);
    Polynomial poly3(poly2);

    poly2.print();
    poly3.print();

    Polynomial poly4((float[]){5, 4, 3, 2, 1}, 4);
    poly4.print();
    
    int* p;
    int x = 5;
    int y[3] = {1, 2, 3}; 
    p = &x;
    p = y;
    printf("%d\n", p[1]);
    printf("%p\n", &y);
}