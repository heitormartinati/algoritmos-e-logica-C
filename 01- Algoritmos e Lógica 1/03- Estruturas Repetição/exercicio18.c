#include <stdio.h>

int main(){
    int a,cometa;
    scanf("%d", &a);

    cometa = 1986;

    while (cometa <= a){
        cometa += 76;
    }
    printf("%d", cometa);
    return 0;
}