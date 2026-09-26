#include <stdio.h>

int main(){
    int n1,n2,acum = 0,i;
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1; i++){
        acum += n2;
    }
    printf("%d", acum);
    return 0;

}