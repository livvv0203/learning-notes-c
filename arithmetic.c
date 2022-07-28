#include <stdio.h>

int main()

{
    double a, b, sum, diff, product, c;

    printf("Enter a: ");
    scanf("%lf", &a); // Receive input in a

    printf("Enter b: ");
    scanf("%lf", &b);

    sum = a + b;
    printf("a + b = %.2lf\n", sum);

    diff = a - b;
    printf("a - b = %.2lf\n", diff);

    product = a * b;
    printf("a * b = %.2lf\n", product);

    c = a / b;
    printf("a / b = %.2lf\n", c); 

    int s = sizeof(int); // 2 bytes
    printf("%d", s); // 4 bytes - 32bits

    return 0;
}





