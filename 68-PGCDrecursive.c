#include <stdio.h>
int PGCdrecursive(int a, int b){
    if (b == 0)
    {
        return a;
    }else
    {
        return PGCdrecursive(b, a % b);
    }
}
int main (){
    int a , b;

    printf("enter the number1: ");
    scanf("%d", &a);
    printf("enter the number2: ");
    scanf("%d", &b);

    printf("the pgcd between %d and %d is: %d", a,b, PGCdrecursive(a,b));

    return 0;
}