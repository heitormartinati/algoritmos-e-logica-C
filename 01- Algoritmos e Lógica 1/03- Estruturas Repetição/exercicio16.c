#include <stdio.h>

int main(){
    int n,frente,tras, propriedade;

    scanf(" %d ", &n);

    while( n >= 1000 && n <= 9999){
        frente = n / 100;
        tras = n % 100;
        propriedade = (frente + tras) * (frente + tras);

        if (propriedade == n){
            printf("propriedade de 3025!\n");
        }
        else{
            printf("numero comum\n");
        }
        scanf("%d", &n);
    }
    return 0;
}