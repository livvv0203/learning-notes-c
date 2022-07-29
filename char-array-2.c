#include<stdio.h>

void print(char* C) {
    int i = 0;
    while(*(C + i) != '\0') { // same as C[i] or *C
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}

int main() {

    char C[20] = "Hello";
    print(C);

    return 0;
}







