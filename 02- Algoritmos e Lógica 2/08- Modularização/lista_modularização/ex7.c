#include <stdio.h>
int converter(char palavra[]){
    int i, j, tamanho, quantidade = 0;
    char aux;
    for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] >= '0' && palavra[i] <= '9'){
            return -1;
        }
    }
    tamanho = i;
    for(i = 0; i < tamanho; i++){
        if(palavra[i] == 'a' || palavra[i] == 'A'){
            palavra[i] = '@';
            quantidade++;
        }
        else if(palavra[i] == 'e' || palavra[i] == 'E'){
            palavra[i] = '3';
            quantidade++;
        }
        else if(palavra[i] == 'i' || palavra[i] == 'I'){
            palavra[i] = '1';
            quantidade++;
        }
        else if(palavra[i] == 'o' || palavra[i] == 'O'){
            palavra[i] = '0';
            quantidade++;
        }
        else if(palavra[i] == 't' || palavra[i] == 'T'){
            palavra[i] = '7';
            quantidade++;
        }
        else if(palavra[i] == 's' || palavra[i] == 'S'){
            palavra[i] = '5';
            quantidade++;
        }
    }
    for(i = 0; i < tamanho / 2; i++){
        aux = palavra[i];
        palavra[i] = palavra[tamanho - 1 - i];
        palavra[tamanho - 1 - i] = aux;
    }
    return quantidade;
}
int main(){
    char palavra[101];
    int quantidade;
    scanf(" %100[^\n]", palavra);
    quantidade = converter(palavra);
    if(quantidade == -1){
        printf("numeros\n0\n");
    }
    else{
        printf("%s\n%d\n", palavra, quantidade);
    }
    return 0;
}