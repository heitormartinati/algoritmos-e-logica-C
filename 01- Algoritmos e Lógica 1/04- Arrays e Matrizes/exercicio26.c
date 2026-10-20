#include <stdio.h>

int main(){
    int testCases,size,array[1000],i,j,k,l,aux,cont = 1,maxCont = 0;

    int mode,sum = 0,maxNum,minNum,min;

    double average,median;

    scanf("%d", &testCases);

    for(i = 0; i < testCases; i++){
        scanf("%d", &size);

        sum = 0;
        cont = 1;
        maxCont = 0;


        for(j = 0; j < size; j++){
            scanf("%d", &array[j]);
            sum += array[j];
        }

        for(k = 0; k < size; k++){

            min = k;
            for(l = k + 1; l < size; l++){
                if(array[l] < array[min]){
                    min = l;
                }
            }

            aux = array[k];
            array[k] = array[min];
            array[min] = aux;
        }

        maxNum = array[size - 1];
        minNum = array[0];
        average = (double)sum / size;

        for(j = 0; j < size - 1; j++){

            if(array[j] == array[j + 1]){
                cont++;
            }

            else{
                if(cont > maxCont){
                    maxCont = cont;
                    mode = array[j];
                }
                cont = 1;
            }
        }
        if(size % 2 == 0){
            median = (double)(array[size / 2 - 1] + array[size / 2]) / 2;
        }
        else{
            median = array[size / 2];
        }
        printf("sequencia %d :\n", i + 1);

        for(j = 0; j < size; j++){
            printf("%d ", array[j]);
        }
        printf("\n");
        printf("%d %d\n", minNum, maxNum);
        printf("%g\n", average);
        printf("%d\n%g\n",mode, median);
    }
    return 0;
}