#include <stdio.h>

int main(){
    int numFloors, i, j, rescued = 0, fire = 0;
    char string[6];

    scanf("%d", &numFloors);

    for(i = 0; i < numFloors; i++){

        scanf("%s", string);

        for(j = 0; j < 5 && fire != 1; j++){

            if(string[j] == 'P'){
                rescued++;
            }
            else if(string[j] == 'F'){
                fire = 1;
            }
        }
    }

    if(rescued > 0){
        printf("Resgatados : %d\n", rescued);
    }
    else if (fire == 1){
        printf("Impossivel!\n");
    }
    else{
        printf("Predio Vazio\n");
    }

    return 0;
}