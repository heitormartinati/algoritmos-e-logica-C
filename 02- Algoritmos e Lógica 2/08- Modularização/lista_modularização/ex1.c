#include <stdio.h>

int somaDigitos(int num){

    int sum = 0, ultimoDigito;
    while(num > 0){

        ultimoDigito = num % 10;
        sum += ultimoDigito;
        num = num / 10;
    }

    return sum;
}

int main(){
    int num, sum = 0;

    scanf("%d", &num);

    sum += somaDigitos(num);

    printf("%d\n", sum);
    return 0;
}