#include<stdio.h>
int main(){
    int i , product, m;

    // M is the number of table product.
    printf("enter the number m: ");
    scanf("%d", &m);

    for ( i = 1; i <= 10; i++)
    {
        product = i*m;
        printf("%d * %d = %d \n", i , m , product);

    }

}