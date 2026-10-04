#include <stdio.h>

int main(){
    int altura, caule, i, j;
    scanf("%d", &altura);

    caule = altura / 2;

    for(i = 0; i < altura; i++){
        for(j = 0; j < altura - i; j++){
            printf(" ");
        }

        for(j = 0; j < i * 2; j++){
            printf("X");
        }
        printf("\n");
    }
    for(i = 0; i < caule; i++){
        for(j = 0; j < altura - 1; j++){
            printf(" ");
        }
        printf("XX\n");
    }

    return 0;
}