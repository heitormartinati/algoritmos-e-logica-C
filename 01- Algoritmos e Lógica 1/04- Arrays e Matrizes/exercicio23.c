#include <stdio.h>

int main(){
    int array[10],i,size,sum = 0,divisorSum = 0;
    double average;

    scanf("%d", &size);

    for(i = 0; i < size; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = (double)sum / size;

    for(i = 0; i < size; i++){
        if(array[i] % 3 == 0){
            divisorSum += array[i];
        }
    }

    printf("Media: %2.lf\n",average);
    printf("Divisiveis: %d\n",divisorSum);

    return 0;

}