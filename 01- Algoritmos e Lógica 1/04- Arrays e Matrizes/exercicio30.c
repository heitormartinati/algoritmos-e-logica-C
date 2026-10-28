#include <stdio.h>

int main(){
    int testCases, size, array[1000], i, j, k, l;
    int min,minNumber,maxNumber,mode,sum,aux,cont = 1,maxCont = 0;
    double median, average;

    scanf("%d", &testCases);

    for(i = 0; i < testCases; i++){
        scanf("%d", &size);

        minNumber = 0;
        maxNumber = 0;
        median = 0;

        for(j = 0; j < size; j++){
            scanf("%d", &array[j]);
            sum += array[j];
        }

        for(k = 0; k < size; k++){
            min = k;
            for(l = 0; l < size; l++){
                if(array[l] < array[min]){
                    min = l;
                }
            }

            aux = array[k];
            array[k] = array[min];
            array[min] = aux;
        }

        minNumber = array[0];
        maxNumber = array[size - 1];

        average = (double)sum / size;

        for(k = 0; k < size; k++){

            if(array[k] == array[k + 1]){
                cont++;
            }
            else{
                if(cont > maxCont){
                    mode = array[k];
                    maxCont = cont;
                }
                cont = 1;
            }
        }

        if(size % 2 == 0){
            median = array[size / 2] + array[size / 2 - 1] / 2;
        }
        else{
            median = array[(size / 2)];
        }
        
        printf("sequencia %d:\n", i + 1);
        for(k = 0; k < size; k++){
            printf("%d", array[k]);
        }
        printf("%d %d\n", minNumber, maxNumber);
        printf("%g\n",average);
        printf("%d\n%d",mode, median);
    }

    return 0;
}