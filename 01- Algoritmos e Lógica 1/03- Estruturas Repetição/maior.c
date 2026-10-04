#include <stdio.h>

int main(){
    int n, maior;
    scanf("%d", &n);
    maior = n;

    while( n != 0){
        if ( n > maior){
            maior = n;
        }
        scanf("%d", &n);

    }
    printf("%d", maior);
    return 0;
}