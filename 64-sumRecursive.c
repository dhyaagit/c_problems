
#include <stdio.h>
int sumRcursive(int n){
    if (n == 1 || n == 0 )
    {
        return n;
    }else
    {
        return n + sumRcursive(n - 1);
    }
    
}

int main(){
    int n;
    printf("give a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("error, give a positive interger.");
    }else
    {
        
        printf("the sum of %d is: %d", n, sumRcursive(n));
    }
    
    return 0;
}