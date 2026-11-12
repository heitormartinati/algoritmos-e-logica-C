#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, i, j, min, aux;

    v = malloc(6 * sizeof(int));

    for(i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 6; i++){
        min = i;
        for(j = i + 1; j < 6; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }

    printf("%d\n%d", v[0], v[5]);
    free(v);
}
