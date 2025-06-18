// this is a repo for learning functions in c that handels the basic operators for starting.

/*
#include <stdio.h>
int power(int n){
    int p;
    p = n*n;
    return p;
}


int main(){

int x;

printf("give an integer: ");
scanf("%d", &x);

printf("the power of %d is %d", x, power(x));


    return 0;
}
    */



/*
    #include <stdio.h>
    
    float minimum(float a, float b){
        float min;

        if (a>b)
        {
        min = b;
        }
        else
        {
            min = a;
        }
        return min;
    }

    int main(){

        float a, b;
        printf("give a: ");
        scanf("%f", &a);
        printf("give b: ");
        scanf("%f", &b);

        printf("the min betwen %.2f and %.2f is: %.2f", a, b, minimum(a,b));
        return 0; 
    }
        */


/*
#include <stdio.h>

void testIntegerSigne(int n){
    if (n % 2 == 0)
    {
        printf("its even");
    }else
    {
        printf("its odd");
    }       
}


int main(){

int nbr;

printf("give a number: ");
scanf("%d", &nbr);

testIntegerSigne(nbr);

return 0;
}*/



/*
#include <stdio.h>
#include <string.h>

int funcSum(int a , int b){
    return a + b;
}
void procName(char string[]){
    printf("hello %s \n", string);
}

int main(){

char string[50]; int a, b;

printf("enter your name: ");
scanf("%s", string);

printf("enter two integers: ");
scanf("%d", &a);
printf("enter two integers: ");
scanf("%d", &b);

procName(string);
printf("the sum is: %d", funcSum(a,b));

return 0;
}
*/


/*
#include <stdio.h>
int suite(int n){

    if ( n == 1)
    {
        return 1;
    }else if (n == 2)
    {
        return 2;
    }
    else 
    {
        return suite( n-1 ) + suite( n-2 );
    } 
    
}

int main (){
    int n;
 
    printf("give the number U: ");
    scanf("%d", &n);

    printf("the result is: %d", suite(n));

    return 0;
}*/




/*
#include <stdio.h>

int quotient(int a, int b){
int temp;
if (a < b)
{
    return a;
}else
{
    return (a - b) % b ;
}

}

int main(){

    printf("the result is: %d", quotient(17,5));
return 0;
}*/

