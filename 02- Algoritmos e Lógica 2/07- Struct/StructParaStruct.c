struct DataNas{
    int dia, mes, ano;
};

struct Pessoa2 {

    struct DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
};

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i;
    struct Pessoa2 pessoa;


    printf("Digite seu nome: \n");
    scanf("%s", pessoa.nome);


    printf("Digite sua idade: \n");
    scanf("%d", &pessoa.idade);

    printf("Digite seu sexo: \n");
    scanf("%c", &pessoa.sexo);

    printf("Digite sua data de nascimento: \n");
    scanf("%d %d %d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);
 
    
    
    printf("%d %s %c\n", pessoa.idade, pessoa.nome, pessoa.sexo);
    printf("Data de nascimento: %d/%d/%d\n", pessoa.dataNas.dia, pessoa.dataNas.mes,pessoa.dataNas.ano);
}