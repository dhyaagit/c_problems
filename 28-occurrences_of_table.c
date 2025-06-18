#include <stdio.h> 
int main(){
    int i , n , tab[10] , cpt=0;

    // Step 1: Input 10 integers
    for ( i = 0; i < 10; i++)
    {
        printf("enter an integer: ");
        scanf("%d", &tab[i]);
    }
        printf("\n");

            // Step 2: Input number N
    printf("enter an number N: ");
    scanf("%d", &n);

      // Step 3: Count occurrences of N
    for ( i = 0; i <10; i++){
      if (tab[i] == n){
        cpt++;
      }
    }

    printf("\n");
    
    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    
    printf("\n");
    printf("\n");
    printf(" the N apears: %d ", cpt);
return 0;
}