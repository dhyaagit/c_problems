#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
int i;
char word[100];
int itsUpper = 1  , itsLower =1 ;
printf("give a word: ");
scanf("%s", word);
for ( i = 0; word[i] != '\0'; i++)
{
   if (isalpha(word[i]))
   {
         if (!isupper(word[i]))
    {
        itsUpper = 0;
    }
        if (!islower(word[i]))
    {
        itsLower = 0;
    }
   }
   
}
if (itsUpper)
{
    printf("this is an upper word");
}
else if (itsLower)
{
    printf("this is an lower word");
}
else
{
    printf("this is a mixed word");
}
return 0;
}