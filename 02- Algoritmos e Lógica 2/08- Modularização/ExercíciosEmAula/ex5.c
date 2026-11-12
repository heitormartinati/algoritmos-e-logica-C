#include <stdio.h>

void trocarValor(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a, b;

    scanf("%d%d", &a, &b);

    printf("a: %d b: %d\n", a, b);

    trocarValor(&a,&b);

    printf("a: %d b: %d\n", a, b);

    return 0;
}