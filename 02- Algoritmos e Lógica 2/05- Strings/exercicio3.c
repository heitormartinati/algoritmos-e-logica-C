#include <stdio.h>
#include <string.h>

int main(){
    int numWords, i;

    char dictionary[100][101], phrase[101][100];

    scanf("%d", &numWords);

    for(i = 0; i < numWords; i++){
        scanf(" %100[^\n]", dictionary[i]);
    }

    i = 0;

    do{
        scanf("%100[^\n]", phrase[i]);
    }while(strcmp(phrase[i], "*") != 0);



   
    return 0;
}