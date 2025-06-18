
#include <stdio.h>
int FibonacciRecursive(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else
    {
        return FibonacciRecursive(n-1) + FibonacciRecursive(n-2);

    }    
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    printf("the fibonacci of %d is: %d", n, FibonacciRecursive(n));

    return 0;
}