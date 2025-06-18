#include <stdio.h>
int main(){

int nbr ;
float cost, total;

printf("give the number of photocopy needed: ");
scanf("%d", &nbr);

if (nbr < 0)
{
   printf("error, the number can't be negative");
   return 0;
}

else if (nbr >= 0 && nbr <= 10)
{
    cost = 0.25;
}else if (nbr > 10 && nbr <= 20)
{
    cost = 0.20;
}else if (nbr > 20)
{
    cost = 0.10;
}

for (int i = 0; i < nbr; i++)
{
    total = total + cost;
}


printf("the total cost is: %.2f", total);
    return 0;
}