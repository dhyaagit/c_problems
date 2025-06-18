
#include <stdio.h>
float PowerRecursive(float x, int n){

    if (x == 1 || n == 1)
    {
        return x;
    }else
    {
        return x * PowerRecursive(x, n-1);
    }
}


int main(){
    int n ;
    float x;

    printf("give the value of x: ");
    scanf("%f", &x);
    printf("give his power n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("error, enter a positive power.");
    }else
    {
        printf("the result of %.2f power %d is: %.2f", x,n,PowerRecursive(x,n));
    }
    
    return 0;
}