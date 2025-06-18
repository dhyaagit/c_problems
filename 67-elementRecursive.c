
#include <stdio.h>
void nbrsRecursive(int a, int b){

    if (a > b)
    {
        return;
    }else if (a == b)
    {
        printf("%d", a);
        return;
    }else
    {
        printf(
            "%d ", a
        );
        nbrsRecursive(a+1, b);
    }
}

int main(){
    int a,b;
    printf("give the number a: ");
    scanf("%d", &a);
    printf("give the number b: ");
    scanf("%d", &b);

    printf("the element are: \n");
    nbrsRecursive(a,b);
    
    return 0;
}