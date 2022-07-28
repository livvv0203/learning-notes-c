#include<stdio.h>

int main() {

    int a = 10;
    int *p;

    p = &a; // address of a

    printf("Address p is %p\n", p);
    printf("Size of integer is %lu bytes.\n", sizeof(int));
    printf("Address p + 1 is %p\n", p + 1);

    return 0;
}





