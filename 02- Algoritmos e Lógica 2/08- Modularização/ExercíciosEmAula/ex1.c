#include <stdio.h>

void contagemProgressiva(int num){
    int i, j;

    for(i = 1; i <= num; i++){
        j = 1;
        while(j <= i){
            if(j < i){
                printf("%d-", i);
            }
            else{
                printf("%d", i);
            }
            j++;
        }
        printf("\n");
    }
}


int main(){
    int num;

    scanf("%d", &num);

    contagemProgressiva(num);
    
    return 0;
}