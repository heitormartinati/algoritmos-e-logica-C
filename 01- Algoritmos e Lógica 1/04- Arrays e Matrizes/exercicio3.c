#include <stdio.h>

int main(){
    int n, pedrinhas[1000],magic_num,i,sum = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d", &pedrinhas[i]);
    }

    scanf("%d", &magic_num);

    for(i = 0; i < n; i++){
        if (pedrinhas[i] % magic_num == 0){
            sum += pedrinhas[i];
        }
    }
    printf("%d", sum);
    return 0;
}