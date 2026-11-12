#include <stdio.h>
#include <stdlib.h>

struct StudentInformation {
    char name[100];
    int age;
};


int main(){
    struct StudentInformation *student;
    struct StudentInformation *under14;
    struct StudentInformation *over14;

    int i, numStudents, contUnder = 0, contOver = 0;

    scanf("%d", &numStudents);


    student = malloc(numStudents * sizeof(struct StudentInformation));
    under14 = malloc(numStudents * sizeof(struct StudentInformation));
    over14 = malloc(numStudents * sizeof(struct StudentInformation));
    

    for(i = 0; i < numStudents; i++){
        scanf("%s %d", student[i].name, &student[i].age);
    }

    for(i = 0; i < numStudents; i++){
        if(student[i].age <= 14){
            under14[contUnder] = student[i];
            contUnder++;
        }
        else{
            over14[contOver] = student[i];
            contOver++;
        }
    }

    under14 = realloc(under14, contUnder * sizeof(struct StudentInformation));
    over14 = realloc(over14, contOver * sizeof(struct StudentInformation));

    for(i = 0; i < contUnder; i++){
        printf("%s\n%d\n", under14[i].name, under14[i].age);
    }

    for(i = 0; i < contOver; i++){
        printf("%s\n%d\n", over14[i].name, over14[i].age);
    }


    free(student);
    free(under14);
    free(over14);

    return 0;
}