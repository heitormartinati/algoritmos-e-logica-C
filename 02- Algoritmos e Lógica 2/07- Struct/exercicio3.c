#include <stdio.h>
#include <stdlib.h>

int main(){
    double *activitiesScore, *activitiesWeight, average, totalSum = 0, totalWeight = 0;
    int numActivities, i;

    scanf("%d", &numActivities);

    activitiesScore = malloc(numActivities * sizeof(double));
    activitiesWeight = malloc(numActivities * sizeof(double));

    for(i = 0; i < numActivities; i++){
        scanf("%lf", &activitiesScore[i]);
    }

    for(i = 0; i < numActivities; i++){
        scanf("%lf", &activitiesWeight[i]);
    }

    for(i = 0; i < numActivities; i++){
        totalSum += activitiesScore[i] * activitiesWeight[i];
        totalWeight += activitiesWeight[i];
    }

    average = totalSum  / totalWeight;


    printf("%.2lf", average);

    free(activitiesScore);
    free(activitiesWeight);

    return 0;
}