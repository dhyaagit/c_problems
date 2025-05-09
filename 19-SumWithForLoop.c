#include <stdio.h>
int main(){
int i , sum = 0 , n ;

printf("enter the number n: ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
    sum += i ;
}
    printf("the sum of 1 and %d is equal to %d", n , sum); 

}