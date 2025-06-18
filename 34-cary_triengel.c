#include <stdio.h>
int main(){

int N,j,i;

printf("give a number: ");
scanf("%d", &N);

for ( i = 1; i <= N; i++)
{
    for ( j = 1; j <= i; j++)
    {
        //Her change instand of i put (j) to do a tiengle like this:
        /*
        1
        12
        123
        1234
        */

        //or put (*) to do a triengle of star "*"
        printf("%d",i);
       
    }
     printf("\n");
}



    return 0;
}