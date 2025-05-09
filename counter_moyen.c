#include <stdio.h>
int main(){
float j, arr[10];
int i;
for ( i = 0; i < 10; i++)
{
    printf("give ur note: ");
    scanf("%f", &arr[i]);
    j = j + arr[i];
}
    printf("ur moyene is: %.2f /20", j/20);

    return 0;
}