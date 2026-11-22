#include <stdio.h>
#include <string.h>

int main(){

    int qtdBooks, qtdPhones, qtdClothes, qtdSales, productId;
    int i;

    char name[11], lastPhone[11], lastBook[11], lastCLothing[11];

    scanf("%d", &qtdBooks);
    scanf("%d", &qtdPhones);
    scanf("%d", &qtdClothes);
    scanf("%d", &qtdSales);

    for(i = 0; i < qtdSales; i++){
        scanf("%s", name);
        scanf("%d",&productId);

        if(productId == 1 && qtdBooks > 0){
            strcpy(lastBook, name);
            qtdBooks--;
        }
        else if(productId == 2 && qtdPhones > 0){
            strcpy(lastPhone, name);
            qtdPhones--;
        }
        else if(productId == 3 && qtdClothes > 0){
            strcpy(lastCLothing, name);
            qtdClothes--;
        }
    }
    
    printf("livro %d, %s\n", qtdBooks, lastBook);
    printf("celular %d, %s\n", qtdPhones, lastPhone);
    printf("roupa %d, %s\n", qtdClothes, lastCLothing);

    return 0;
}