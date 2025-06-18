
#include <stdio.h>

void procTestOddEvenNbr(int a , int b){
   
    if ((a+b) > 0 )
    {
        printf("the sum is even ");
    }else
    {
        printf("the sum is odd ");
    }
    printf("\n");
    if ((a*b) > 0)
    {
        printf("the multiply is even ");
    }else
    {
        printf("the multiply is odd ");
    }

}

int main(){

int a, b;
printf("give two number: ");
scanf("%d %d", &a, &b);

procTestOddEvenNbr(a,b);


    return 0;
}