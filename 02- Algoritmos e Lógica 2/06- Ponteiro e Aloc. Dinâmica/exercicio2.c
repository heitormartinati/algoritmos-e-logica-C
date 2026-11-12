#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, size, i;

    scanf("%d", &size);

    v = malloc(size * sizeof(int));

    for(i = 0; i < size; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i < size; i++){
        printf("%d ", v[i] * v[i]);
    }

    free(v);
    return 0;
    
}

