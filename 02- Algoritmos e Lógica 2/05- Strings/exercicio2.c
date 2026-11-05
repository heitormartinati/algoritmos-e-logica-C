#include <stdio.h>

int main(){
    char string[301], new_string[301];

    int i, cont = 0;

    scanf("%300[^\n]", string);

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] != ' '){
            new_string[cont] = string[i];
            cont++;
        }
        else if(string[i] == ' ' && string[i + 1] != ' '){
            new_string[cont] = string[i];
            cont++;
        }
    }

    new_string[cont] = '\0';

    printf("%s", new_string);

    return 0;

}