#include <stdio.h>

int main(){
    int testCase, i, j, k, vowel, funny;

    char str1[51], str2[51];

    scanf("%d", &testCase);

    for(i = 0; i < testCase; i++){

        funny = 1;
        vowel = 0;

        scanf("%50s", str1);

        for(j = 0; str1[j] != '\0'; j++){
            if(str1[j] == 'a' || str1[j] == 'e' || str1[j] == 'i' || str1[j] == 'o' || str1[j] == 'u'){
                str2[vowel] = str1[j];
                vowel++;
            }
        }

        str2[vowel] = '\0';

        for(k = 0; k < vowel / 2; k++){
            if(str2[k] != str2[vowel - 1 - k]){
                funny = 0;
            }
        }

    if(funny == 1){
        printf("ENGRACADA\n");
    }
    else{
        printf("SEM GRACA\n");
    }

    }

    return 0;
}