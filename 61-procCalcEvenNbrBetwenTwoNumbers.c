#include <stdio.h>

void procCalcEvenNbrs(int n, int m){

int evenNbr = 0;

printf("give the number m: ");
scanf("%d", &m);
printf("give the number n: ");
scanf("%d", &n);

printf("\n");
if (m > n)
{
    printf("Error...!");

}else
{
    printf("the even number are: ");
    
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            evenNbr++;
        }
        
    }
    printf("\n");
    printf("the total even number betwen %d and %d is: %d", m, n, evenNbr);
}


}

int main(){

    int m, n;
    procCalcEvenNbrs(m,n);

    return 0;
}