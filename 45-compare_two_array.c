#include <stdio.h>
int main(){
int arr1[10], arr2[10], i, temp=1;

for ( i = 0; i < 10; i++)
{
    printf("====>fill the table 1: ");
    scanf("%d ", &arr1[i]);
}

printf("\n");

for ( i = 0; i < 10; i++)
{
    printf("---->fill the table 2: ");
    scanf("%d ", &arr2[i]);
}
for ( i = 0; i < 10; i++)
{
    if (arr1[i] != arr2[i])
    {
        temp = 0;
    }
}

if (temp == 1)
{
    printf("true");
}
else
{
    printf("false");
}

    return 0;
}