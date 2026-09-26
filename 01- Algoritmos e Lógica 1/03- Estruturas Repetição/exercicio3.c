#include <stdio.h>

int main(){
    int n,i,minimo,fase1,fase2,total,cont = 0;
    scanf("%d %d", &n, &minimo);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &fase1, &fase2);
        total = fase1 + fase2;
    

        if(total >= minimo){

            cont++;
        }
    }
    printf("%d\n", cont);

    return 0;

}