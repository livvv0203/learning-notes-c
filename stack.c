#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101
/**
 * @brief Array Implementation
 *
 * int A[10]
 * top <- -1 Empty stack
 *
 */

int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Erro: stack overflow\n");
        return;
    }
    top++;
    A[top] = x;
}

void Pop()
{
    if (top == -1)
    {
        printf("Error: No ele to pop.");
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

void Print()
{
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Pop(); Print();
    Push(12); Print();
}



