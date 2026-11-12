#include <stdio.h>
int ehprimo(int num){
    int i;
    int primo = 1;
    if (num < 2){
        primo = 0;
    }
    for(i = 2; i < num; i++){
        if(num % i == 0){
            primo = 0;
        }
    }
    return primo;
}
int proximo_primo(int y){
    while(ehprimo(y) != 1){
        y++;
    }
    return y;
}
int fatorial(int num){
    int resultado = 1;
    while(num > 0){
        resultado *= num;
        num--;
    }
    return resultado;
}
int main(){
    int num, i, numerador, denominador;
    double soma = 0;
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        numerador = fatorial(i);
        if(i == 1){
            denominador = 1;
        }
        else{
            denominador = proximo_primo(i);
        }
        soma += (double)numerador / denominador;
        printf("%d!/%d",i, denominador);
        if(i < num){
            printf(" + ");
        }
    }
    printf("\n");
    printf("%.2lf\n",soma);
    return 0;
}

