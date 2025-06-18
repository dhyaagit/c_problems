
#include <stdio.h>
int main(){
#define max 100

int arr[max], i ,j ,size , temp;

printf("Enter the size of the array: ");
scanf("%d", &size);

if (size<=0 || size > max)
{
    printf("Error!, enter a number betwen 1 and %d.", max);
    return 1;
}


printf("\n");

printf("pls fill the array:\n");
for ( i = 0; i < size; i++)
{
    printf("T[%d]: ", i);
    scanf("%d", &arr[i]);
}


for ( i = 0; i < size-1; i++)
{
    for ( j = 0; j < size-1-i ; j++)
    {
        if (arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        
    }
    
}
printf("the array after sorting is:\n");
for ( i = 0; i < size; i++)
{
    printf("%d\t", arr[i]);
}

    return 0;
}