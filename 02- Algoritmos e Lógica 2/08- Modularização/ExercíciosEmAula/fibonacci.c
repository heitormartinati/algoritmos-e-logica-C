#include  <stdio.h>

int fibonacci(int num){
    if (num == 1 || num == 2){
        return 1;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(){
    int num, qtd_termos, i;
    int sum = 0;

    scanf("%d", &qtd_termos);

    for(i = 0; i < qtd_termos; i++){
        scanf("%d", &num);
        sum += fibonacci(num);
    }

    printf("%d", sum);

    return 0;
}