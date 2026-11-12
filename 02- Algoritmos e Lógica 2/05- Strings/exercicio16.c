#include <stdio.h>

int main(){
    char string[501];

    int i = 0, cont = 0;

    scanf("%500[^\n]", string);

    for(i = 0; i < 500 && string[i] != '\0'; i++){
        if(string[i] == ' ' && string[i + 1] != ' ' && string[i] != '\0'){
            cont++;
        }
    }

    printf("%d", cont + 1);

    return 0;
}