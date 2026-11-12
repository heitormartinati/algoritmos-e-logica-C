
/*

#include <stdio.h>

void procurarNum(int *v, int *men, int *mai, int tam){
    int i;

    *men = v[0];
    *mai = v[0];

    for(i = 0; i < tam; i++){
        if (v[i] < *men){
            *men = v[i];
        }

        if(v[i] > *mai){
            *mai = v[i];
        }
    }

    printf("Na funcao --> Menor: %d  Maior: %d\n", *men, *mai);
    printf("Na funcao --> End de men: %p  End de mai: %p\n", &men, &mai);
    printf("Na funcao --> Cont de men: %p  Cont de mai: %p\n", men, mai);
}

int main(){

    int menor, maior, vet[] = {10, 20, 30 , 40 , 50};

    procurarNum(vet, &menor, &maior, 5);
    
    printf("Em main --> End de Menor:  %p  End de Maior: %p\n", &menor, &maior);
    printf("Em main --> Menor:  %d  Maior: %d\n", menor, maior);

    return 0;
}

*/

//Exercicio 1

#include <stdio.h>

int main(){

    int v[] = {10, 20, 30, 40, 50};

    int max, min, sum = 0, i;

    int num1 = 25, num2 = 10;

    int *p1, *p2, *p3;



    p1 = &num1;

    
    printf("Valor de num : %d\n", num1);
    printf("End de numero : %p\n", &num1);
    printf("End de numero usando p: %p\n", p1);
    printf("Valor apontado por p: %d\n", *p1);



    //Exercicio 2

    p2 = &num2;

    *p2 = 50;

    printf("%d\n", num2);


    //Exercicio 3

    p3 = v;

    max = v[0];
    min = v[0];

    for(i = 0; i < 5; i++){
        sum += *(p3 + i);

        if(*(p3 + i) > max){
            max = *(p3 + i);
        }

        if(*(p3 + i) < min){
            min = *(p3 + i);
        }
    }

    printf("%d %d %d\n", sum, min, max);







    return 0;
}
