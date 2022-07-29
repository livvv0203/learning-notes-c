#include<stdio.h>

// The callback function 
void A() {
    printf("Hello");
}

// takes a function pointer as an argument
void B(void (*ptr)()) {
    ptr(); // callback function that "ptr" points to
}

int main() {

    // void (*p)() = A;
    // B(p); // A will be executed through callback
    // A is callbacked through B 
    B(A); // A is address of the func

    return 0;
}