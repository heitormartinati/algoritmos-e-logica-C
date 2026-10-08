#include <stdio.h>

int main(){
    int n,i,v1[1000],v2[1000];
    scanf("%d", &n);

    for( i = 0; i < n; i++){
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < n; i++){
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d\n%d\n", v1[i],v2[i]);
    }
    return 0;
}