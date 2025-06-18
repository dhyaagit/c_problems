#include <stdio.h>
int main(){
    int i ,tab[10];
for ( i = 0; i < 10; i++)
{
    printf("enter an integer: ");
    scanf("%d", &tab[i]);    
}


    for ( i = 0; i < 10; i++)
    {
        printf("%d \n", tab[i]);
    }
return 0;
}