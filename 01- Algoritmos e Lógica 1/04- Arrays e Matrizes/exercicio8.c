#include <stdio.h>

int main(){
    int numIdeias,extPerfeita,i,v[1000],j,cont;

    scanf("%d %d", &numIdeias, &extPerfeita);

    for(i = 0; i < numIdeias; i++){
        scanf("%d", &v[i]);
    }
    for( i = 0; i < numIdeias; i++){
        for(j = i + 1; j < numIdeias; j++){
            if(v[i] + v[j] == extPerfeita){
                cont++;
            }
        }
    }
    if(cont > 0){
        printf("SIM\n");
    }
    else{
        printf("NAO\n");
    }
    return 0;
}