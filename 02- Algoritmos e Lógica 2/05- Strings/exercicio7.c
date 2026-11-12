#include <stdio.h>

int main(){
    char name[101], upper[101];

    int x = 0;

    while(name[x] != '\0'){
        if(name[x] >= 97 && name[x]<= 122){
            upper[x] = name[x] - 32;
        }
    }
    
    

    scanf("%100[^\n]", name);


}