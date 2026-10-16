#include <stdio.h>

int main(){
    int n,v[10],freq[10],i,j,menor,aux,cont;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    //Ordenação

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

    //Frequência
    for(i = 0; i < n;){
        cont = 1;

        while( i < n - 1 && v[i] == v[ i + 1]){
            cont++;
            i++;
        }
    
        printf("%d %d\n", v[i],cont);
        i++;
    }
    return 0;
}