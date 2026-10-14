#include <stdio.h>

int main(){
    int num[10],i,x,maior,segundoMaior;

    for(i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    maior = num[0];
    segundoMaior = num[1];

    if(segundoMaior > maior){
        maior = num[1];
        segundoMaior = num[0];
    }
    
    for(i = 0; i < 10; i++){
        if(num[i] > maior){
            segundoMaior = maior;
            maior = num[i];
    
        }
        if(num[i] != maior){
            if(num[i] > segundoMaior){
                segundoMaior = num[i];
            }
        }
    }
    printf("%d", segundoMaior);

    return 0;
}