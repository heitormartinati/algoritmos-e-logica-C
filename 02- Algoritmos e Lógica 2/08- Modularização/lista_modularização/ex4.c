#include <stdio.h>
#include <stdlib.h>
double calcular_media(int *vetor, int tamanho){
    int i;
    double soma = 0;
    for(i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return (double) soma / tamanho;
}
int main(){
    int *v, tamanho, i;
    double media;
    scanf("%d", &tamanho);
    v = malloc(tamanho * sizeof(int));
    for(i = 0; i < tamanho; i++){
        scanf("%d", &v[i]);
    }
    media = calcular_media(v, tamanho);
    printf("%.2lf", media);
    free(v);
    return 0;
}