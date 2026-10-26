#include <stdio.h>

int main(){
    int qtdCars,totalTime,qtdLap;

    int i,j,k,l,min,aux;

    int timeCar[1000],timeCarOriginal[1000],lapTime[1000],position[1000];

    scanf("%d %d", &qtdCars, &qtdLap);

    for(i = 0; i < qtdCars; i++){
        totalTime = 0;
        for(j = 0; j < qtdLap; j++){
            scanf("%d", &lapTime[j]);

            totalTime += lapTime[j];
        }
        timeCar[i] = totalTime;
        timeCarOriginal[i] = timeCar[i];
    }

    for(k = 0; k < qtdCars; k++){
        min = k;
        for(l = k + 1; l < qtdCars; l++){
            if(timeCar[l] < timeCar[min]){
                min = l;
            }
        }

        aux = timeCar[k];
        timeCar[k] = timeCar[min];
        timeCar[min] = aux;
    }

    for(k = 0; k < 3; k++){
        for(l = 0; l < qtdCars; l++){
            if(timeCar[k] == timeCarOriginal[l]){
                position[k] = l + 1;
            }
        }
    }

    for(k = 0; k < 3; k++){
        printf("%d\n", position[k]);
    }

    return 0;
}