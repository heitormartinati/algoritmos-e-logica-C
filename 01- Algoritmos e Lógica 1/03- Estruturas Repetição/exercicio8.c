#include <stdio.h>

int main(){
    int i,qtdProg = 0,linhas,metaLinha = 0,programa,maior = 0, diaMaior;

    for(i = 1; i <= 7; i++){
        scanf("%d %d", &programa, &linhas);
        if(programa >= 5){
            qtdProg += 1;
        }
        if(linhas >= 100){
            metaLinha += 1;
        }
        if(linhas >= maior){
            maior = linhas;
            diaMaior = i;
        }
    }
    
    printf("QUANTIDADE DE DIAS QUE ATINGIU A META DE PROGRAMAS: %d\n",qtdProg);
    printf("QUANTIDADE DE DIAS QUE ATINGIU META DE LINHAS: %d\n",metaLinha);

    switch (diaMaior)
    {
    case 1: printf("DIA QUE MAIS PRODUZIU: DOMINGO\n"); break;
    case 2: printf("DIA QUE MAIS PRODUZIU: SEGUNDA FEIRA\n"); break;
    case 3: printf("DIA QUE MAIS PRODUZIU: TERCA FEIRA\n"); break;
    case 4: printf("DIA QUE MAIS PRODUZIU: QUARTA FEIRA\n"); break;
    case 5: printf("DIA QUE MAIS PRODUZIU: QUINTA FEIRA\n"); break;
    case 6: printf("DIA QUE MAIS PRODUZIU: SEXTA FEIRA\n"); break;
    case 7: printf("DIA QUE MAIS PRODUZIU: SABADO\n"); break;
    }
    return 0;
}