#include<stdio.h>

int Add(int a, int b) {
    return a + b;
}

int main() {
    int c;
    int* p(int, int); // return pointer to integer

    p = &Add; // or Add - address of function
    c = (*p)(2, 3); // or p(2, 3)

    printf("%d", c);

    return 0;
}



