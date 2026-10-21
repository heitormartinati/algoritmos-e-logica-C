#include <stdio.h>

int main(){
    int v1[1000], v2[1000],v3[1000],i,j,k,n,m,achei,cont = 0,maior,aux;

    scanf("%d",&m);

    for(i = 0; i < m; i++){
        scanf("%d", &v1[i]);
    }

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < m; i++){
        achei = 0;
        for(j = 0; j < n; j++){
            if(v1[i] == v2[j]){
                achei = 1;
            }
        }
        if(achei == 0){
            v3[cont] = v1[i];
            cont++;
        }

    }

    for(i = 0; i < cont; i++){
        maior = i;
        for(j = i + 1; j < cont; j++){
            if(v3[j] > v3[maior]){
                maior = j;
            }
        }
        aux = v3[i];
        v3[i] = v3[maior];
        v3[maior] = aux;
    }

    for(i = 0; i < cont; i++){
        printf("%d ", v3[i]);
    }

    return 0;
}