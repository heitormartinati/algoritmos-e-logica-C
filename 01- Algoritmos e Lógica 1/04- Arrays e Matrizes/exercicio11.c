#include <stdio.h>

int main(){
    int va[1000], vb[1000],i,j;

    i = 0;

    scanf("%d", &va[i]);

    while(va[i] != -1){
        i++;
        scanf("%d", &va[i]);
    }

    for(j = 0; j < i; j++){
        vb[j] = va[j] * va[j];
    }

    for(j = 0; j < i; j++){
        printf("%d ", vb[j]);
    }

    return 0;
}