#include <stdio.h>

#include "mylib/mylib.h"

int main(void){

    int N = 5;

    printf("%d = %d =%d\n",N,factorialIterative(N),factorialRecursive(N));
    printf("%d = %d\n",fibonacciIterative(N),fibonacciRecursive(N));

    return 0;
}

