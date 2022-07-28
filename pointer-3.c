#include<stdio.h>

// void Increment(int a) {
//     a = a + 1; // a here, is another a
//     printf("Address of variable a in increment func = %p\n", &a); // diff from the address of a in main()
// }

void Increment2(int *p) {
    *p = (*p) + 1; // increase value stored in address p by 1
}

int main() {
    int a; // local variable
    a = 10;
    // should be &a
    Increment(a); // the value of a is mapped to the argument pass to Increment()
    printf("Address of variable a in increment func = %p\n", &a); 

    // printf("a = %d", a);
}
















