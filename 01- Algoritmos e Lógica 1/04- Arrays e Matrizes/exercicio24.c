#include <stdio.h>

int main(){
    int array[10], size, i;

    scanf("%d", &size);

    for(i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    for(i = size - 1; i >= 0; i--){
        printf("%d\n", array[i]);
    }

    return 0;
}