#include <stdio.h>

int main(){
    int i,v1[10], v2[10],sum[10];

    for( i = 0; i < 10; i++){
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < 10; i++){
        scanf("%d", &v2[i]);
    }
    
    for(i = 0; i < 10; i++){
        sum[i] = v1[i] + v2[i];
        printf("%d ", sum[i]);
    }

    return 0;
}