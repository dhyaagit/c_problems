#include <stdio.h>
int main(){

int num1, num2, num3, perm;

printf("give three numbers: \n");
scanf("%d %d %d", &num1, &num2, &num3);

if (num1 > num2)
{
    perm = num2;
    num2 = num1;
    num1 = perm;
}
if (num1 > num3)
{
    perm= num3;
    num3 = num1;
    num1 = perm;
}

if (num2 > num3)
{
    perm = num3;
    num3 = num2;
    num2 = perm;
}

printf("The numbers in ascending order are: %d %d %d", num1, num2, num3);

    return 0;
}