
#include <stdio.h>
void compt(int i){

    if (i>10)
    {
        return ;
    }else
    {
        printf("%d ", i);
        compt(i+1);
    }
    
}
int main(){

compt(0);  

    return 0;
}