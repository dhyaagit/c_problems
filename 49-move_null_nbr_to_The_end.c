#include <stdio.h>
int main (){

int i, arr[10], j=0;

for ( i = 0; i < 10; i++)
{
    printf("fill the array[%d]: ",i);
    scanf("%d", &arr[i]);
}

for ( i = 0; i < 10; i++)
{
    if (arr[i] != 0)
    {
        arr[j] = arr[i];
        j++ ;
    }
}
for ( i = j; i < 10; i++)
{
   arr[i] = 0;
}
printf("the array after shift: ");
for ( i = 0; i < 10; i++)
{
    printf("%d ", arr[i]);

}


    return 0;
}