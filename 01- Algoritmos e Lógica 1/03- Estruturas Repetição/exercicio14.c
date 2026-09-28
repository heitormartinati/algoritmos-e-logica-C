#include <stdio.h>

int main(){
    int L, R, sum;

    scanf("%d %d", &L, &R);
    
    while(L != 0 || R != 0){
        sum = L + R;
        printf("%d\n", sum);

        scanf("%d %d", &L, &R);

    }
    return 0;
}
