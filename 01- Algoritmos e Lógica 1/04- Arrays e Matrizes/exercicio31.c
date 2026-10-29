#include <stdio.h>

int main(){
    int size, array[1000],i,j,min,aux,found;

    scanf("%d", &size);

    for(i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < size; i++){
        min = i;
        for(j = i + 1; j < size; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }

        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }

    for(i = 0; i < size; i++){
        found = 0;
        if(i < size - 1 && array[i] == array[i + 1]){
            found = 1;
        }

        if(found == 0){
            printf("%d ", array[i]);
        }
    }
    return 0;
}