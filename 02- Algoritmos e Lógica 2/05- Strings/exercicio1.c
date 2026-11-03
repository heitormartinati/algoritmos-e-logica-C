#include <stdio.h>

int main(){
    int deslocamento, i, sum, resto, aux;
    char string[31];

    scanf("%s", string);
    scanf("%d", &deslocamento);

    printf("%s\n", string);

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += 32;
        }

        aux = string[i] - 'a';
        sum = aux + deslocamento;

        if(sum > 25){
            resto = sum % 26;
            string[i] = resto + 'a';
        }
        else{
            string[i] += deslocamento;
        }
    }

    printf("%s", string);
    
    return 0;
}