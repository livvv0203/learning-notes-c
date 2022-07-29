#include<stdio.h>
/**
 * Memory Heap in C
 * use new and delete in C++
 * 
 * malloc - returns void pointer, the base address 
 * calloc - returns void pointer, but takes 2 arguments: number of arg, size of the datatype
 */
int main() {

    int a; // goes on stack
    int* p;
    // point p stores the address of the block in heap
    p = (int*)malloc(sizeof(int));
    *p = 10; // Fill in number 10 to the block of heap

    free(p); // clear of the memory allocated using malloc

    p = (int*)malloc(sizeof(int)); // then, point another address
    *p = 20;

    int* p2 = (int*)malloc(3 * sizeof(int));
    
    // Using calloc
    int* p3 = (int*)calloc(3, sizeof(int));

    // Using realloc - change the size of the memory
    // Two arguments - prev block ptr, new block ptr
    return 0;
}

















