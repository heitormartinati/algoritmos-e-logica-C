#include <stdio.h>

int main(){
    int array1[1000], array2[1000],array3[1000];

    int i, j, k, l, size1, size2, found, cont = 0, max, aux;

    scanf("%d", &size1);

    for(i = 0; i < size1; i++){
        scanf("%d", &array1[i]);
    }

    scanf("%d", &size2);

    for(j = 0; j < size2; j++){
        scanf("%d", &array2[j]);
    }

    for(k = 0; k < size1; k++){
        found = 0;
        for(l = 0; l < size2; l++){
            if(array1[k] == array2[l]){
                found = 1;
            }
        }

        if(found == 0){
            array3[cont] = array1[k];
            cont++;
        }
    }

    for(k = 0; k < cont; k++){
        max = k;
        for(l =  k + 1; l < cont; l++){
            if(array3[l] > array3[max]){
                max = l;
            }
        }

        aux = array3[k];
        array3[k] = array3[max];
        array3[max] = aux;
    }

    for(k = 0; k < cont; k++){
        printf("%d ", array3[k]);
    }
    return 0;
}