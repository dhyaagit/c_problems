#include <stdio.h>
int main(){

int i=2 ,n ;
printf("give a number: ");
scanf("%d", &n);

while (n%i != 0 && i<n )
{
    i++;
}
if (i == n)
{
    printf("==>  %d is a prime number ", n);

}else
{
    printf("==> %d is not a prime number", n);
}

    return 0;
}