#include <stdio.h>

int main(){
    int n,i;
    double nota[1000],menor1,menor2,average,sum = 0;
    scanf("%d", &n);

    if( n < 3){
        printf("Numero de notas insuficiente\n");
    }

    for(i = 0; i < n; i++){
        scanf("%lf",&nota[i]);
        sum += nota[i];
    }
    menor1 = nota[0];
    menor2 = nota[1];

    if(nota [0] < nota[1]){
        menor1 = nota[0];
        menor2 = nota[1];
    }
    else{
        menor1 = nota[1];
        menor2 = nota[0];
    }
    for( i = 2; i < n; i++){
        if(nota[i] < menor1){
            menor2 = menor1;
            menor1 = nota[i];
        }
        else if(nota[i] < menor2){
            menor2 = nota[i];
        }
    }
    average = (sum + (- menor1 - menor2)) / (n - 2);

    printf("%.2lf\n", average);
    return 0;

}