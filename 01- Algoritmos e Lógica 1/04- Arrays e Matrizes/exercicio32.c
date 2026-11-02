#include <stdio.h>

int main(){
    int testCases,qtdStudents;

    int grades[1000],originalGrades[1000],unchanged = 0,i,j,k,l,max,aux;

    scanf("%d", &testCases);

    for(i = 0; i < testCases; i++){
        scanf("%d", &qtdStudents);

        unchanged = 0;

        for(j = 0; j < qtdStudents; j++){
            scanf("%d", &grades[j]);
            originalGrades [j] = grades[j];
        }

        for(k = 0; k < qtdStudents; k++){
            max = k;
            for(l = k + 1; l < qtdStudents; l++){
                if(grades[l] > grades[max]){
                    max = l;
                }
            }      

            aux = grades[k];
            grades[k] = grades[max];
            grades[max] = aux;
        }


        for(j = 0; j < qtdStudents; j++){
            if(originalGrades[j] == grades[j]){
            unchanged++;
            }
        }


        printf("%d\n",unchanged);
    }
    return 0;

}