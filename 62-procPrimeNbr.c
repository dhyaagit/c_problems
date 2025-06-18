
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void primeNbr(){

    int i, nbr;

    printf("give a number: ");
    scanf("%d", &nbr);

    for ( i = 2; i < sqrt(nbr); i++)
    {
        if (nbr % i == 0)
        {
            printf(" %d is not a prime number", nbr);
        }else
        {
            printf(" %d is a prime number", nbr);
        }
    }
    
}


int main(){

    primeNbr();
    return 0;
}