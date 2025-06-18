#include <stdio.h>
int main(){
    int i, tab[10], j, temp;
    for ( i = 0; i < 10; i++)
    {
        printf("give an integer: ");
        scanf("%d", &tab[i]);
    }

    for ( i = 0; i < 9; i++){
    for ( j = i+1; j < 10; j++){

        if (tab[j]< tab[i])
        {
            temp = tab[i];
            tab[j]= tab[i];
            tab[j]=temp;
        }
    }}

    for ( i = 0; i < 10; i++)
    {
    printf("%d ", tab[i]);
    }
    

    return 0;
}