struct DataNas {
    int dia, mes, ano;
};



struct InfoAluno {

    struct DataNas dataNas;
    char prontuario[20];
    char curso[50], nome[50];
};

#include <string.h>

int main(){
    struct InfoAluno aluno;
    
    strcpy(aluno.nome, "Heitor");
    strcpy(aluno.curso, "Ciencia da Computacao");
    strcpy(aluno.prontuario, "SL3070263");
    aluno.dataNas.dia = 7;
    aluno.dataNas.mes = 3;
    aluno.dataNas.ano = 2008;

    return 0;
}

/*struct InfoCarro {
    int anoFabricacao;
    char cor[30], modelo[50], fabricante[50];
};

#include <string.h>

int main(){
    struct InfoCarro carro;

    strcpy(carro.fabricante, "Toyota");
    strcpy(carro.modelo, "Corola Cross");
    strcpy(carro.cor, "Preto");
    carro.anoFabricacao = 2023;

    return 0;
}*/
