#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num1, *num2, aux;

    num1 = malloc(sizeof(int));
    num2 = malloc(sizeof(int));

    scanf("%d %d", num1, num2);

    if(*num1 > *num2){
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }

    printf("%d %d\n", *num1, *num2);

    return 0;
}