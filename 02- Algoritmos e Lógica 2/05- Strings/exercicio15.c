#include <stdio.h>

int main(){
    char string[51],caracter;

    int i = 0, cont = 0;

    scanf("%50[^\n]%*c", string);
    scanf("%c", &caracter);

    while(string[i] != '\0'){
        if(string[i] == caracter){
            cont++;
        }
        i++;
    }
    
    printf("%d", cont);

    return 0;
}