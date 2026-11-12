#include <stdio.h>
#include<stdlib.h>

int main(){
    int *v, i, j, size, aux, min;

    scanf("%d", &size);

    for(i = 0; i < size; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i < size; i++){
        min = i;
        for(j = i + 1; j < size; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }

    for(i = 0; i < size; i++){
        printf("%d ", v[i]);
    }

    free(v);
    return 0;
}