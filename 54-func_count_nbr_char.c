
#include <stdio.h>

int funcNbrChar(char character[] ){
    int i = 0;
    while (character[i] != '\0')
    {
        i++;
    }
    return i;
}
int main(){
    
    char character[100];
    printf("give a characters: ");
    fgets(character, sizeof(character), stdin);

    printf("the number of this character %s is %d", character, (funcNbrChar(character)-1) );

    return 0;
}