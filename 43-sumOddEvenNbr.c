#include <stdio.h>
int main(){

int n, tab[10], i, sum=0;
for ( i = 0; i < 10; i++)
{
printf("give a numbers: ");
scanf("%d", &tab[i]);


    if ( tab[i] % 2 == 0 )
    {
        sum +=tab[i];
    }else{
        sum -= tab[i];
    }
}

    printf("%d ", sum);

return 0;
}