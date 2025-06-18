#include <stdio.h>
#include <string.h>

int main(){

char letter;
printf("give an charachter: ");
scanf("%c", &letter);

if (letter >= 65 && letter <= 90)
{
    printf("this is an upper character");
}else if (letter >=97 && letter <=122)
{
    printf("this is an lower character");
}else
{
    printf("this is not a character!!");
}


    return 0;
}