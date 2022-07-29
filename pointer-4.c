#include<stdio.h>

// Pass by reference - pointer of Integer
int SumOfElements(int* A, int size) {
    int i, sum = 0;

    for (i = 0; i < size; i++) {
        sum += A[i];
    }
    
    return sum;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/sizeof(A[0]); // size of all bytes / size of first ele - 20 / 4
    int total = SumOfElements(A, size);
    printf("Sum of elements = %d\n", total); // 15
}