#include <stdio.h>

// 3-D Array of Integers - in declaration
void Func(int (*C)[2][2]) {

}

int main()
{
    // 3 dimensional array
    int C[3][2][2] = {
        {{2, 5}, {7, 9}},
        {{3, 4}, {6, 1}},
        {{0, 8}, {11, 13}}
    };

    // printf("%p %p %p %p", C, *C, C[0], &C[0][0]); // all the same 

    return 0;
}