#include <stdio.h>

int main(){
    char lastName[43],i = 0, cont = 0, found = 0;

    scanf("%42[^\n]", lastName);

    while(lastName[i] != '\0'){
        if(lastName[i] != 'a' && lastName[i] != 'e' && lastName[i] != 'i' && lastName[i] != 'o' && lastName[i] != 'u' && lastName[i] != 'A' && lastName[i] != 'E' && lastName[i] != 'I' && lastName[i] != 'O' && lastName[i] != 'U'){

            cont++;
        }
        else{
            cont = 0;
        }
        if(cont >= 3){
            found = 1;
        }
        i++;
    
    }

    if(found == 1){
        printf("%s nao eh facil\n",lastName);
    }
    else{
        printf("%s eh facil",lastName);
    }

    return 0;
}