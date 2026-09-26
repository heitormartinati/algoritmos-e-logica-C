#include <stdio.h>

int main(){
    int n,acum,cont;
    double mediaGlicose;
    scanf("%d", &n);
    cont = 0;
    acum = 0;

    while( n != 0){
        acum += n;
        cont++;

        scanf("%d", &n);
    }
    mediaGlicose = (double)(acum / cont);

    if ( mediaGlicose < 110){
        printf("Glicose Normal\n");
    }
    else if (mediaGlicose >= 200){
        printf("Glicose Muito Alta\n");
    }
    else{
        printf("Glicose Alterada\n");
    }
    return 0;
}