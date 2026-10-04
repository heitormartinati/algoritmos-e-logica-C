#include <stdio.h>

int main(){
    int n, menor;
    scanf("%d", &n);

    menor = n;

    while(n != 0){
        if ( n < menor){
            menor = n;
        }
        scanf("%d", &n);
    }
    printf("%d", menor);
    return 0;
}