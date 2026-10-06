#include <stdio.h>

int main(){

    int n, total;
    total = 0;

    scanf("%d", &n);

    while(n != 0){
        total += n;
        scanf("%d", &n);
    }
    printf("%d", total);

    return 0;
}