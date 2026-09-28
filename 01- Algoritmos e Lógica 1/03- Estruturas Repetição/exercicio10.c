#include <stdio.h>

int main(){
    int n,i,j,acum;
    scanf("%d", &n);

/* Topo da árvore*/
    for( i = 1; i <= n; i++){
        
        for(j = 1; j <= 2 * i; j++){
            printf("X");

        }
        printf("\n");
        printf(" ");
    }
}