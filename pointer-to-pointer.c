#include<stdio.h>

int main() {

    int x = 5;
    int *p; // also 4 bytes
    
    p = &x; // address of x
    *p = 6; // modified

    int **q; // pointer of a pointer
    q = &p; // address of p

    int ***r = &q;
    printf("%d\n", *p);
    printf("%p\n", *q);
    return 0;
}