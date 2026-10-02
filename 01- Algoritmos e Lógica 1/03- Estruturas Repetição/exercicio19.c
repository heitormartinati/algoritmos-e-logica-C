#include <stdio.h>

int main(){
    int n,sum,cont;
    scanf("%d", &n);

    cont = 0;
    sum = 0;

    while ( sum <= 18){
        sum += n;
        if(sum <= 18){
            cont++;
        }
        scanf("%d", &n);
    }
    printf("%d", cont);
    return 0;
}