
#include <stdio.h> 

int countCharacter(char text[], char character){

    int count=0 , i=0;
    while (text[i] != '\0')
    {
        if (text[i] == character)
        {
            count++;
        }
        
        i++;
    }
    return count;

}

int main(){

    char text[100];
    char character;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    printf("give a character: ");
    scanf("%c", &character);

    printf("\n");
    printf("-->The char '%c' apears %d times", character , countCharacter(text, character));

    return 0;
}