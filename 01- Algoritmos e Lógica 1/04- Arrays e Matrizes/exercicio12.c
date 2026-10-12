#include <stdio.h>

int main(){
    int va[1000], vb[1000],vc[1000],i,n,contb = 0,contc = 0;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &va[i]);
    }

    for(i = 0; i < n; i++){
        if(va[i] % 2 == 0){
            vc[contc] = va[i];
            contc++;
        }
        else{
            vb[contb] = va[i];
            contb++;
        }
    }

    for(i = 0; i < contb; i++){
        printf("%d ", vb[i]);
    }
    printf("\n");

    for(i = 0; i < contc; i++){
        printf("%d ", vc[i]);
    }
    return 0;
}