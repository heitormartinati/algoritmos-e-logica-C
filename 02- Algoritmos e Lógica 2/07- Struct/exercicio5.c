#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int idade, tipoIngresso;
    char sexo;
} DadosPessoas;
int main() {
    DadosPessoas **dadosPessoas;
    int i, j, numPessoas, fila;
    int somaIdade = 0, numHomens = 0, numMulheres = 0;
    int receitaTotal = 0, receitaFila = 0;
    double mediaIdade;
    scanf("%d", &numPessoas);
    dadosPessoas = malloc(numPessoas * sizeof(*dadosPessoas));
    for (i = 0; i < numPessoas; i++) {
        dadosPessoas[i] = malloc(3 * sizeof(*dadosPessoas[i]));
    }
    for (i = 0; i < numPessoas; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d %c %d",
                  &dadosPessoas[i][j].idade,
                  &dadosPessoas[i][j].sexo,
                  &dadosPessoas[i][j].tipoIngresso);
        }
    }
    scanf("%d", &fila);
    for (i = 0; i < numPessoas; i++) {
        for (j = 0; j < 3; j++) {
            somaIdade += dadosPessoas[i][j].idade;
            if (dadosPessoas[i][j].sexo == 'M')
                numHomens++;
            else
                numMulheres++;
            if (dadosPessoas[i][j].tipoIngresso == 0)
                receitaTotal += 40;
            else
                receitaTotal += 20;
            if (j == fila) {
                if (dadosPessoas[i][j].tipoIngresso == 0)
                    receitaFila += 40;
                else
                    receitaFila += 20;
            }
        }
    }
    mediaIdade = (double)somaIdade / (numPessoas * 3);
    printf("Receita Total: %d\n", receitaTotal);
    printf("Receita Fila %d: %d\n", fila, receitaFila);
    printf("Homens: %d\n", numHomens);
    printf("Mulheres: %d\n", numMulheres);
    printf("Media das idades: %.0lf\n", mediaIdade);
    for (i = 0; i < numPessoas; i++)
        free(dadosPessoas[i]);
    free(dadosPessoas);
    return 0;
}