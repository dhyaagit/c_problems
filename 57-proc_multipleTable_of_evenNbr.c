
#include <stdio.h>
void multiplicationTable(int x){
    int result;

    if (x > 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            result = i * x;
           printf(" %d * %d = %d\n", i, x, result);
        }
        
    }else
    {
        printf(" %d is an odd number", x);
    }
}

int main(){

    int nbr;

    printf("give a number: ");
    scanf("%d", &nbr);

    multiplicationTable(nbr);

    return 0;
}