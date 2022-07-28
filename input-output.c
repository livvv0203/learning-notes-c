#include<stdio.h>

int main() {

    int a, b, c;

    printf("Enter a: ");

    // Here, we put ampersand, to pass the address of a to scanf() as an argument
    // To fill in data to local varaible a in main()
    // Or, write to a of main, need the address of a
    // scanf() is receiving the address in its local variable
    // scanf() has a reference to a
    // In C, a variable that stores address of other variable, is called a pointer
    // So, we say that scanner has a pointer to a 
    // Using the pointer, it can access and modify value in a
    scanf("%d", &a); // scanf("%d", address of a)

    printf("Enter b: ");
    scanf("%d", &b); // Again, passing address
    
    c = a * b; 
    // %d is the format specifier
    printf("a = %d, b = %d, c = %d", a, b, c); // passing value in local copies 

    return 0;

}














