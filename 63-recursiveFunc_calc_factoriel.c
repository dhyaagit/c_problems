#include <stdio.h>
int factoriel(int n){
    if (n <= 1)
    {
        return 1;
    }else
    {
        return n * factoriel( n-1 );
    }
    
    
}

int main(){
    int n;
    printf("enter a number n: ");
    scanf("%d", &n);
    printf("the factoriel of %d is: %d", n , factoriel(n));

    return 0;
}