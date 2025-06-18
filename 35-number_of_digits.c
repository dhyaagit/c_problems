#include <stdio.h>
int main(){
int i=1 ,N;

printf("give a number: ");
scanf("%d", &N);

while (N/10 !=0)
{
    N=N/10;

    i++;
}

printf("The number of digits is %d", i);
    return 0;
}