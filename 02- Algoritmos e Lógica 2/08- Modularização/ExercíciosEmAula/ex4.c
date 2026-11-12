#include <stdio.h>
typedef struct{
    int real, imaginaria;
}Complexo;

Complexo somarComplexos(Complexo z1, Complexo z2){
    Complexo soma;
    soma.real = z1.real + z2.real;
    soma.imaginaria = z1.imaginaria + z2.imaginaria;
    return soma;
}
Complexo produtoComplexos(Complexo z1, Complexo z2){
    Complexo produto;
    produto.real = (z1.real * z2.real) - (z1.imaginaria * z2.imaginaria);
    produto.imaginaria = (z1.real * z2.imaginaria) + (z1.imaginaria * z2.real);
    return produto;
}
void imprimirComplexos(Complexo soma, Complexo produto){
    printf("Soma: %d+%di\n", soma.real, soma.imaginaria);
    printf("Multi: %d+%di", produto.real, produto.imaginaria);
}

int main(){
    Complexo z1, z2, soma, produto;
    scanf("%d%d", &z1.real, &z1.imaginaria);
    scanf("%d%d", &z2.real, &z2.imaginaria);
    soma = somarComplexos(z1,z2);
    produto = produtoComplexos(z1,z2);
    imprimirComplexos(soma, produto);
    return 0;
}
