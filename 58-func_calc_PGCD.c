

#include <stdio.h>

int calculatePGCD(int a, int b){
 
    int rest=0, i;
    while (b != 0)
    {
        rest= a % b;
        a = b;
        b = rest;
        i++;
    }
    return a;
}

int main(){

int a,b, result=0;

printf("give the first number: ");
scanf("%d", &a);
printf("give the second number: ");
scanf("%d", &b);

result = calculatePGCD(a,b);

printf("the PGCD of %d and %d is: %d", a , b , result);


    return 0;
}