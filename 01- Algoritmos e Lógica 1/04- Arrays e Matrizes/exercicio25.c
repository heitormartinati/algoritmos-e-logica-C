#include <stdio.h>

int main(){
    int v[1000],i,j,n,menor,aux;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }

        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }

    for(i = 0; i < n; i++){

        if(i == 0 || v[i] != v[i - 1]){
            printf("%d ", v[i]);
        }
    }

    return 0;
}