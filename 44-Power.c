#include <stdio.h>
#include <math.h>
int main(){

float x, result; int p ;

printf("give a number and his power: ");
scanf("%f", &x);
printf("his power: ");
scanf("%d", &p);
result = pow(x,p);
printf("the result is %.2f", result);
    return 0;
}