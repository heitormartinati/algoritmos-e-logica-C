#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nomeLivro[51], autor[51], categoriaLivro[51];
    int ano, disponivel;
} InformacoesLivro;

void verLivros(InformacoesLivro *livro, int *totalLivros);
void cadastrarLivro(InformacoesLivro *livro, int *totalLivros);
void emprestarLivro(InformacoesLivro *livro, int *totalLivros);
void devolverLivro(InformacoesLivro *livro, int *totalLivros);

int main(){
    InformacoesLivro *livro = malloc(10 * sizeof(InformacoesLivro));
    int escolha = -1, i, totalLivros = 0;

    for(i = 0; i < 10; i++){
        livro[i].disponivel = 1;
    }

    while(escolha != 0){
        printf("==== BIBLIOTECA ====\n");
        printf("1 - Ver livros\n");
        printf("2 - Cadastrar livro\n");
        printf("3 - Emprestar livro\n");
        printf("4 - Devolver livro\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha){

            case 0: printf("Saindo...\n");
            break;

            case 1: verLivros(livro, &totalLivros);
            break;

            case 2: cadastrarLivro(livro, &totalLivros);
            break;

            case 3: emprestarLivro(livro, &totalLivros);
            break;

            case 4: devolverLivro(livro, &totalLivros);
            break;

            default: 
                printf("Escolha invalida!\n\n");
                break;
        }
    }

    free(livro);
    return 0;
}


void verLivros(InformacoesLivro *livro, int *totalLivros){
    int i;

    if(*totalLivros > 0){
        for(i = 0; i < *totalLivros; i++){
            if(livro[i].disponivel == 1){

                printf("Titulo: %s\n", livro[i].nomeLivro);

                printf("Autor: %s\n", livro[i].autor);

                printf("Categoria: %s\n", livro[i].categoriaLivro);

                printf("Ano de Publicacao: %d\n", livro[i].ano);
        
                printf("\n\n");
            }
        }
    }
    else{
        printf("Nenhum livro cadastrado!\n\n");
    }
}
void cadastrarLivro(InformacoesLivro *livro, int *totalLivros){
    int encontrei = 0, i;
    char livroTemporario[51];

    printf("==== CADASTRO DE LIVRO ====\n\n");
    printf("Preencha as informacoes solicitadas abaixo:\n\n");
    printf("Titulo: \n");
    scanf(" %50[^\n]", livroTemporario);

    for(i = 0; i < *totalLivros; i++){
        if(strcmp(livroTemporario, livro[i].nomeLivro) == 0){
            encontrei = 1;
            break;
        }
    }

    if(encontrei == 0){
        strcpy(livro[*totalLivros].nomeLivro, livroTemporario);

        printf("Autor: ");
        scanf(" %50[^\n]", livro[*totalLivros].autor);

        printf("Categoria: \n");
        scanf(" %50[^\n]", livro[*totalLivros].categoriaLivro);

        printf("Ano de Publicacao: \n");
        scanf("%d", &livro[*totalLivros].ano);

        printf("Livro cadastrado com sucesso!\n\n");

        (*totalLivros)++;
    }
    else{
        printf("Livro ja cadastrado!\n\n");
    }
}

void emprestarLivro(InformacoesLivro *livro, int *totalLivros){
    int i, encontrei = 0;
    char livroTemporario [51];

    printf("==== EMPRESTIMO DE LIVRO ====\n\n");

    printf("Digite o titulo do livro que deseja emprestar: \n");
    scanf(" %50[^\n]", livroTemporario);

    for(i = 0; i < *totalLivros; i++){
        if(strcmp(livro[i].nomeLivro, livroTemporario) == 0){
            encontrei = 1;
            break;
        }
    }

    if(encontrei == 1){
        if(livro[i].disponivel == 1){
            printf("Emprestimo realizado com sucesso!\n\n");
            livro[i].disponivel = 0;
        }
        else{
            printf("Esse livro ja esta emprestado!\n\n");
        }
    }

    else {
        printf("Livro nao encontrado!\n\n");
    }
}

void devolverLivro(InformacoesLivro *livro, int *totalLivros){
    int i, encontrei = 0;
    char livroTemporario[51];

    printf("==== DEVOLUCAO ====\n\n");

    printf("Digite o titulo do livro que deseja devolver: \n");
    scanf(" %50[^\n]", livroTemporario);

    for(i = 0; i < *totalLivros; i++){
        if(strcmp(livroTemporario, livro[i].nomeLivro) == 0){
            encontrei = 1;
            break;
        }
    }

    if(encontrei == 1){
        if(livro[i].disponivel == 0){
            printf("Devolucao realizada com sucesso!\n\n");
            livro[i].disponivel = 1;
        }
        else{
            printf("Esse livro ja esta disponivel!\n\n");
        } 
    }

    else{
        printf("Livro nao encontrado!\n\n");
    }



    for(i = 0; i < totalLivros; i++){
        free(livro[i].disponivel);
    }
    free(livro);

    return 0;
}
