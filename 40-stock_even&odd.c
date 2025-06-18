#include <stdio.h>
int main(){

int tab[10], tab1[10], tab2[10], even=0, odd=0, i;

for ( i = 0; i < 10; i++)
{
printf("give a numbers: ");
scanf("%d", &tab[i]);
} 
for ( i = 0; i < 10; i++)
{
    if (tab[i]%2 == 0)
    {  
      tab1[even]= tab[i];
         even++;
    } else
    {
        tab2[odd]= tab[i];
       odd++;
    }   
}

for ( i = 0; i < even; i++)
{
   printf(" %d ", tab1[i]);
}
printf("\n");
for ( i = 0; i < odd; i++)
{
 printf(" %d ", tab2[i]);
}

return 0;
}