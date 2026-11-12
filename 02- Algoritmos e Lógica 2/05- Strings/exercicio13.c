#include <stdio.h>
#include <string.h>

int main(){
    char attack[20], defense[20];

    int i;

    scanf("%19s", attack);
    scanf("%19s", defense);

    if(strcmp(attack, defense) == 0){
        printf("Empate\n");
    }

    else if(strcmp(attack, "Agua") == 0 && strcmp(defense, "Fogo") == 0){
        printf("Vantagem\n");
    }

    else if(strcmp(attack, "Fogo") == 0 && strcmp(defense,"Planta") == 0){
        printf("Vantagem\n");
    }

    else if(strcmp(attack, "Planta") == 0 && strcmp(defense,"Agua") == 0){
        printf("Vantagem\n");
    }

    else{
        printf("Desvantagem\n");
    }

    return 0;





}