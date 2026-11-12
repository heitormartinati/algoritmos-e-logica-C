#include <stdio.h>
#include <stdlib.h>

void reducaoValor(int *v, int tamanho){
    int i;

    for(i = 0; i < tamanho; i++){
        if(v[i] > 10){
        v[i] = 10;
        }
    }
}

int main(){
    int tamanho, i;
    scanf("%d", &tamanho);

    int *v = malloc(tamanho * sizeof(int));

    for(i = 0; i < tamanho; i++){
        scanf("%d", &v[i]);
    }


    reducaoValor(v, tamanho);

    printf("===============");

    for(i = 0; i < tamanho; i++){
        printf("%d\n", v[i]);
    }

    free(v);
    return 0;
}