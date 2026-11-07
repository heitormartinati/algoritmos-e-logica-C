#include <stdio.h>
#include <string.h>

int main(){
    char name[100][21], aux[21];

    int numStudents, selected, min, i, j, k;

    scanf("%d", &numStudents);
    scanf("%d", &selected);

    for(i = 0; i < numStudents; i++){
        scanf(" %20[^\n]", name[i]);
    }

    for(j = 0; j < numStudents; j++){
        min = j;
        for(k = j + 1; k < numStudents; k++){
            if(strcmp(name[k], name[min]) < 0){
                min = k;
            }
        }

        if(min != j){
            strcpy(aux, name[j]);
            strcpy(name[j], name[min]);
            strcpy(name[min], aux);
        }
    }
    
    printf("%s", name[selected - 1]);
    
    return 0;
}