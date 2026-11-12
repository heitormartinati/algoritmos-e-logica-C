#include <stdio.h>

double fatorial(int n){
    if(n == 0){
        return 1;
    }

    return n * fatorial(n - 1);
}

int main(){
    int qtd_termos, i;
    double sum = 0;

    scanf("%d", &qtd_termos);

    for(i = 0; i < qtd_termos; i++){
        sum += (double) 1 / fatorial(i);
    }
    
    printf("%.15lf", sum);
    
    return 0;
}