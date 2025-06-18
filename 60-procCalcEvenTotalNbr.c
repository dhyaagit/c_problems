
#include <stdio.h>

void procCalcEvenTotalNbr(){
int x, countEven=0, total=0; 
float percentage;

do
{
    printf("give a number: ");
    scanf("%d", &x);
    total++;

    if (x % 2 == 0)
    {
        countEven++;
    }
    
} while (x != -1);

percentage = (countEven*100) / total;

printf("the number of even integers is: %d\n", countEven);

printf("the percentage is equal to: %.2f", percentage);

}




int main (){

procCalcEvenTotalNbr();
    return 0;
}