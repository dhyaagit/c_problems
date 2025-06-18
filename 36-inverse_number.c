#include <stdio.h>
int main (){

int n , num, inverse = 0;

printf("enter an number: ");
scanf("%d", &n);


while (n != 0)
{
    num = n % 10;
    inverse = inverse * 10 + num;
    n = n / 10;
    
}

printf("the inverse number is: %d", inverse);


    return 0;
}