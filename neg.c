#include <stdio.h>
int main(){
int m , n;
printf(" give the value of m: ");
scanf("%d", &m);
printf(" give the value of n: ");
scanf("%d", &n);
 
if (m == 0 || n == 0)
{
    printf(" product is null");
}
if (m*n > 0)
{
    printf(" product is positive ");
}if (m * n < 0)
{
    printf(" product is negative");
}





    return 0;
}