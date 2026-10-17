#include <stdio.h>

int main(){
    int matriz[100][100], size, i, j, triangular = 1;

    scanf("%d", &size);

    for(i = 0; i < size; i++){
        for(j = 0 ; j < size; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            if(i > j && matriz[i][j] != 0){
                triangular = 0;
            }
        }
    }

    if(triangular == 1){
        printf("true\n");
    }
    else{
        printf("false\n");
    }

    return 0;
}