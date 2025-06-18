#include <stdio.h>
int main(){

int N, i=1 , D, max ;

printf("give the number1: ");
scanf("%d", &N);
printf("give the number2: ");
scanf("%d", &D);

while (i<= N && i <= D)
{
    if (N%i==0 && D%i==0)
    {
       max = i;
      
    }
     i++;
}

printf("the PGCD betwen %d and %d is: %d", N ,D , max);


    return 0;
}