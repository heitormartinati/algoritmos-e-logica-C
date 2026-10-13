#include <stdio.h>

int main(){
    int v[1000], i, cont,imprimiu = 0,j,n,menor,aux;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(v[j] < v[i]){
                menor = j;
            }
        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
        }
    }
    for(i = 0; i < n; i++){
        cont = 1;
        for(j = i + 1; j < n; j++){
            if(v[i] == v[j]){
                cont++;
            }
        }

        if(i == 0 || v[i] != v[i - 1]){
            if(cont % 2 != 0){
                printf("%d ",v[i]);
                imprimiu = 1;
            }
        }
    }

    if(imprimiu == 0){
        printf("N\n");
    }

    return 0;
}