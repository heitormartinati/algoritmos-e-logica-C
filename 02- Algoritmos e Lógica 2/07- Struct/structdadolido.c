#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pessoa2 {
    int idade;
    char sexo;
    char nome[100];
};

int main(){
    int i;
    struct Pessoa2 pessoa;


    printf("Digite seu nome: \n");
    scanf("%s", pessoa.nome);


    printf("Digite sua idade: \n");
    scanf("%d", &pessoa.idade);

    printf("Digite seu sexo: \n");
    scanf("%c", &pessoa.sexo);





   printf("%d %s %c", pessoa.idade, pessoa.nome, pessoa.sexo);
}