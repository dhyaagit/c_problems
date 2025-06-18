#include <stdio.h>
int main(){

int tab[10], cpt=0, odd=0, i;

for ( i = 0; i < 10; i++)
{
printf("give a numbers: ");
scanf("%d", &tab[i]);
} 
for ( i = 0; i < 10; i++)
{
    if (tab[i]%2 == 0)
    
        cpt++;
    else
    
        odd++;
    
    
    
}

printf("the even number is %d  ", cpt );
printf("the odd number is %d ", odd );



    return 0;
}