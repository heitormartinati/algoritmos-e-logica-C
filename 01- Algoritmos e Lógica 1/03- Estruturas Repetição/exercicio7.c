#include <stdio.h>

int main(){
    int n,i,j,acum;
    scanf("%d", &n);

    for(i = 1; i < n; i++){
        acum = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                acum += j;
            }
        }
        if(acum == 2 * i){
            printf("%d ", i);
        }
    }
    return 0;
}