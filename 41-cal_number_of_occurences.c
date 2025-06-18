#include <stdio.h>
int main(){

int num , occ=0 , i;
do
{
     printf("give a number: ");
    scanf("%d", &num);
    if (num ==5)
    {
        occ++;
    }
    i++;
} while (num != 0);

if (i != 0)
{
    printf("the number occurence of 5 is: %d", occ);
}else{
    printf("there is not a number 5");
}

    return 0;
}