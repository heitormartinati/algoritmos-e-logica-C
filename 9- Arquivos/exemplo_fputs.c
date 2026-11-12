#include <stdio.h>
#define MAX 100

int main() {
    FILE *arq;
    char nome[MAX];

    arq = fopen("C:\\Exemplo-fputs-fprintf.txt", "w");

    if (arq != NULL) {
        fputs("Exemplo de fputs-", arq);

        printf("Forneca seu nome: ");
        scanf("%[^\n]", nome);

        fprintf(arq, "Teste por %s", nome);

        fclose(arq);
    }

    return 0;
}