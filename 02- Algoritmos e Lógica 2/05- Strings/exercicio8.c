#include <stdio.h>

int main(){
    int i, j, testCase, flag;

    char dna1[101],dna2[101], expected;

    scanf("%d", &testCase);

    for(i = 0; i < testCase; i++){

        flag = 1;

        scanf("%s", dna1);
        scanf("%s", dna2);

       for(j = 0; dna1[j] != '\0'; j++){

        switch (dna1[j]){
            case 'A':
                expected = 'T';
                break;

            case 'T':
                expected = 'A';
                break;

            case 'G':
                expected = 'C';
                break;

            case 'C':
                expected = 'G';
                break;
        }

        if(dna2[j] != expected){
            flag = 0;
            dna2[j] = expected;
        }
       }
       
       if(flag == 1){
        printf("COMPLEMENTARES\n");
       }
       else{
        printf("NAO COMPLEMENTARES\n");
        printf("%s",dna2);
       }
    }

    return 0;
}