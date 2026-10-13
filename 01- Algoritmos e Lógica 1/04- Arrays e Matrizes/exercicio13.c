#include <stdio.h>

int main(){
    int n,i,v[1000],contA = 0,contL = 0,contV = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++){
        if(v[i] == 1){
            contV++;
        }
        else if(v[i] == 2){
            contL++;
        }
        else if(v[i] == 3){
            contA++;
        }
    }
    printf("Amarelo = %d\n", contA);
    printf("Laranja = %d\n", contL);
    printf("Vermelho = %d\n", contV);
    
    for(i = n - 1; i >= 0; i--){
        printf("%d ",v[i]);
    }

    return 0;
}