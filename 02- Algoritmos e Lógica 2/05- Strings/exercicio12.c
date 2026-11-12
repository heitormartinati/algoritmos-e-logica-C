#include <stdio.h>
#include <string.h>

int main(){
    char string[20];

    int i, j, contCinema = 0, contBoliche = 0; 

    for(i = 0; i < 7; i++){
        scanf("%19s", string);
        
        for(j = 0; string[j] != '\0'; j++){
            if(string[j] >= 'A' && string[j] <= 'Z'){
                string[j] = string[j] + 32;
            }
        }

        if(strcmp(string, "cinema") == 0){
            contCinema++;
        }
        else{
            contBoliche++;
        }
    }

    if(contCinema > contBoliche){
        printf("CINEMA\n");
    }
    else{
        printf("BOLICHE\n");
    }

    return 0;
}