#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int identificador, idade;
    double salario;
} InformacoesFuncionario;

int main() {
    InformacoesFuncionario *funcionarios;

    int qtdFuncionarios, salarioMax = 0,idadeMin = 0, i;

    scanf("%d", &qtdFuncionarios);

    funcionarios = malloc(qtdFuncionarios * sizeof(InformacoesFuncionario));

    for(i = 0; i < qtdFuncionarios; i++) {
        scanf("%d", &funcionarios[i].identificador);
        scanf("%d", &funcionarios[i].idade);
        scanf("%lf", &funcionarios[i].salario);
    }

    for(i = 1; i < qtdFuncionarios; i++) {
        if(funcionarios[i].salario > funcionarios[salarioMax].salario) {
            salarioMax = i;
        }
        if(funcionarios[i].idade < funcionarios[idadeMin].idade) {
            idadeMin = i;
        }
    }

    printf("Maior Salario Registrado\n");
    printf("ID : %d\n", funcionarios[salarioMax].identificador);
    printf("Idade : %d\n", funcionarios[salarioMax].idade);  
    printf("Salario : %.2lf\n", funcionarios[salarioMax].salario);

    printf("Menor Idade Registrada\n");
    printf("ID : %d\n", funcionarios[idadeMin].identificador);
    printf("Idade : %d\n", funcionarios[idadeMin].idade);  
    printf("Salario : %.2lf\n", funcionarios[idadeMin].salario);

    free(funcionarios);

    return 0;
}