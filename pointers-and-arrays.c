#include<stdio.h>

int main() {

    int A[] = {2, 4, 5, 8, 1};
    printf("%p\n", A); // address of the first element of the array
    printf("%p\n", &A[0]); // address of A[0]
    printf("%d\n", A[0]); // 2
    printf("%d\n", *A); // 2

    int i;
    for (i = 0; i < 5; i++) {
        printf("Address = %p\n", &A[i]);
        printf("-----------\n");
        printf("Address = %p\n", A + i);
    }
    
    return 0;
}














