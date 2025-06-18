#include <stdio.h>
int main (){

int i , tab[10], tst=1;

    printf("give an integers: ");
    scanf("%d", &tab[0]);
 
for ( i = 1; i < 10; i++)
{
    printf("give an integers: ");
    scanf("%d", &tab[i]);

    if (tab[i] != tab[i-1]+1)
{
    tst = 0;   
}}

if (tst == 1)
{
    printf("true");
}else
{
    printf("false");
}


    return 0;
}