#include <stdio.h>

int main(){
    int n, maior;
    maior = 0;

    scanf("%d", &n);

    while ( n != 0){
        if ( n > maior){
            maior = n;
        }
        scanf("%d", &n);
    }
    printf("%d", maior);
    return 0;
}