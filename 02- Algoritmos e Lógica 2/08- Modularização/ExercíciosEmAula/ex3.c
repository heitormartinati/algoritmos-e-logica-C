#include <stdio.h>

int ehprimo(int num, int *primo){
    int i;
    *primo = 1;

    if (num < 2){
        *primo = 0;
    }

    for(i = 2; i < num; i++){
        if(num % i == 0){
            *primo = 0;
        }
    }
}

int main(){
    int num, maiorPrimo = 0, primo;

    scanf("%d", &num);

    while(num != 404){

        ehprimo(num, &primo);

        if(primo == 1){
            if(num > maiorPrimo){
                maiorPrimo = num;
            }
        }

        scanf("%d", &num);
    }

    printf("%d", maiorPrimo);

    return 0;    
}