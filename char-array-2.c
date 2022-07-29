#include<stdio.h>

// Pointer variable - takes 8 bytes in on Mac os 64 bits
void print(char* C) {
    int i = 0;
    while(*(C + i) != '\0') { // same as C[i] or *C
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}

int main() {

    char C[20] = "Hello"; // Allocate 20 bytes
    print(C); // Passing address of C to the print function

    return 0;
}







