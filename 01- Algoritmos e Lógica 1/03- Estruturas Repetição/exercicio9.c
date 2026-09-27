#include <stdio.h>
int main(){
    int n, i,j,qtdDivisores;

    scanf("%d", &n);

    for( i = 1; i <= n; i++){
        qtdDivisores = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                qtdDivisores++;
            }
        }
        if(qtdDivisores > 2 || i == 1){
            printf(" %d ", i);
        }
    }
    return 0;
}