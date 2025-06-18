#include <stdio.h>
int main(){

int N, i, sum=0 ;
printf("give a number: ");
scanf("%d", &N);
for ( i = 1; i < N; i++)
{
    if (i % 2 != 0)
    {
        sum = sum +i;
    }
        
}

printf("the sum of odd number is: %d", sum);

    return 0;
}