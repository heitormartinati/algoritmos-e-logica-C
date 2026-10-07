#include <stdio.h>

int main(){
    int a,b,i,v[10],num,digito;

    scanf("%d %d", &a, &b);

    while( a > 0 || b > 0){
        for(i = a; i <= b; i++){
            num = i;
            while (num > 0){
                digito = num % 10;
                num = num / 10;
            }
        }
        scanf("%d %d", &a, &b);
    }

}