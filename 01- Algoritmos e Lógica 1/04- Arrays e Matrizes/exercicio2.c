#include <stdio.h>

int main(){
    int n,i;
    char caractere[100000];
    
    scanf("%d", &n);

    while( n != 0){
        getchar();

        for(i = 0; i < n; i++){
            scanf("%c", &caractere[i]);
        }

        for(i = n - 1; i >= 0; i--){
            printf("%c",caractere[i]);
        }
        scanf("%d", &n);
    }
    return 0;
}