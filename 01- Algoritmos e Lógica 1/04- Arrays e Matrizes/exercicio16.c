#include <stdio.h>

int main(){
    int va[1000], vb[1000],vc[1000],i,j,contC = 0,n,m,k,achei;

    scanf("%d", &m);
    for(i = 0; i < m; i++){
        scanf("%d", &va[i]);
    }

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &vb[i]);
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(va[i] == vb[j]){
                achei = 0;
                for(k = 0; k < contC; k++){
                    if(va[i] == vc[k]){
                        achei = 1;
                    }
                }
                if(achei == 0){
                    vc[contC] = va[i];
                    contC++;
                }
            }
        }
    }
    for(k = 0; k < contC; k++){
        printf("%d ", vc[k]);
    }

    return 0;
}