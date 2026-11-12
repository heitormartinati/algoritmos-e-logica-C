#include <stdio.h>

int main(){
    int testCase, i, j, k, aux, max;

    char number[101];

    scanf("%d", &testCase);

    for(i = 0; i < testCase; i++){

        scanf("%s", number);

        for(j = 0; number[j] != '\0'; j++){
            max = j;
            for(k = j + 1; number[k] != '\0'; k++){
                if(number[k] > number[max]){
                    max = k;
                }
            }
            aux = number[j];
            number[j] = number[max];
            number[max] = aux;
        }

        printf("Caso %d: %s\n", i + 1, number);
    }

    return 0;
}