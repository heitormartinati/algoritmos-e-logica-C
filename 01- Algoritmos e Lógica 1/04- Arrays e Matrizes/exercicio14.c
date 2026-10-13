#include <stdio.h>

int main(){
    int va[1000], vb[1000],vc[1000],i = 0,j = 0,k = 0,n,m,cont = 0;

    scanf("%d", &m);

    for(i = 0; i < m; i++){
        scanf("%d", &va[i]);
    }

    scanf("%d", &n);

    for(j = 0; j < n; j++){
        scanf("%d", &vb[j]);
    }
    /*
    for(i = 0; i < m; i++){
        vc[k] = va[i];
        k++;
        for(j = 0; j < n; j++){
            vc[k] = vb[j];
            k++;
        }
    }
    */
        i=0;
        j=0;
    while(k < (m + n)){
        if(i < m){
            vc[k] = va[i];
            i++;
            k++;
        }
        if(j < n){
            vc[k] = vb[j];
            j++;
            k++;
        }
    }

    for(k = 0; k < n + m; k++){
        printf("%d ", vc[k]);
    }

    return 0;
}

