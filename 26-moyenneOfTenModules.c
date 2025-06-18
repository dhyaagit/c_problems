#include <stdio.h>
int main(){
    float moy[10], moyenne=0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter your notes: ");
        scanf("%f", &moy[i]);    
        moyenne = moyenne + moy[i];
    }
 
    printf("%f", moyenne/10 );
    return 0;
}