/**
 * @file pointer.c
 * @author Jieqing Liu
 * @date 2022-07-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * Pointers - variables that store address of another variable
 * 
 */

#include<stdio.h>

int main() {

    // p -> address of a
    // *p -> value at the address(dereferencing)
    int a = 10;
    int* p = &a; // pointer varibale 

    printf("%p\n", p); // pointer - address of a
    printf("%d\n", *p); // value at address pointed by p
    printf("%p\n", &a); // address

    printf("a = %d\n", a); // 10
    *p = 12; // dereferencing - modify the value using pointer
    printf("a = %d\n", a); // 12

    int b = 20;

    return 0;
}



















