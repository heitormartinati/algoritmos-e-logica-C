#include <stdio.h>

int main(){
    int n, pares;
    scanf("%d", &n);

    while ( n != 0){
        if (n % 2 == 0){
            pares++;
        }
    }
    printf("%d", pares);
    return 0;
}