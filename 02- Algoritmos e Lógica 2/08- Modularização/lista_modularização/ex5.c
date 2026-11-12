#include <stdio.h>
char *AnalisarSituacao(double n1, double n2, double n3, double n4){
    double media;
    double numerador_notas = n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4;
    media = (double) numerador_notas / 10;
    if (media >= 9){
        return "aprovado com louvor";
    }
    else if(media >= 7){
        return "aprovado";
    }
    else if(media >= 3){
        return "prova final";
    }
    else{
        return "reprovado";
    }
}
int main(){
    double n1, n2, n3, n4;
    char *situacao_final;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    situacao_final = AnalisarSituacao(n1,n2,n3,n4);
    printf("%s\n", situacao_final);
    return 0;
}