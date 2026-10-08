#include <stdio.h>

int main(){
    int n,i,j;
    double perCandidato1[1000], perCandidato2[1000],maiorDif = 0,dif;
    scanf("%d", &n);


    for(i = 0; i < n; i++){
        scanf("%lf", &perCandidato1[i]);
    }
    for(j = 0; j < n; j++){
        scanf("%lf", &perCandidato2[j]);
    }

    for(i = 0; i < n;i++){
        dif = perCandidato1[i] - perCandidato2[j];
        if(dif >  maiorDif){
            maiorDif = dif;
        }
    }
    printf("%.2lf", maiorDif);

    return 0;
}
    