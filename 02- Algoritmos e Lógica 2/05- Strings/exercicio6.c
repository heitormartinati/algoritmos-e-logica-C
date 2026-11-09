#include <stdio.h>

int main(){
    char text[256], invertido[256];

    int x = 0, i,cont = 0;

    scanf("%255[^\n]", text);

    while(text[x] != '\0'){
        x++;
    }

    for(i = x - 1; i >= 0; i--){
        invertido[cont] = text[i];
        cont++;
    }
    invertido[x] = '\0';

    printf("%s\n", invertido);

    return 0;
}