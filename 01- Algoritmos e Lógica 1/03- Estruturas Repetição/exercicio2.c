#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int restante, ultimoDigito,novoNumero;

    while( n != 0){
        restante =  n / 10;
        ultimoDigito = n % 10;
        
        novoNumero = restante + (ultimoDigito * 5);

        if(novoNumero % 7 == 0){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
        scanf("%d", &n);
    }

    return 0;

}