#include<stdio.h>
#include<string.h>

int main() {

    char C[5]; 
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    int len = strlen(C);
    printf("%s\n", C);
    printf("Length = %d\n\n", len); // 4 - Null character doesn't count to the length

    char B[] = "JIEQINGGGG";
    int len_c = strlen(B);
    printf("Length of B is: %d\n", len_c); // 10
    printf("Size of B is: %lu", sizeof(B)); // 11 bytes

    printf("\n 1) Size of Int is: %lu", sizeof(int));


    return 0;
}
















