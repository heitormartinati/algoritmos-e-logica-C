#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Products{
    char productName[41];
    double productPrice;
    int availableQuantity;
};

int main(){
    struct Products *products;
    int numProducts, numToBuy, i, j;
    double totalPrice = 0;

    scanf("%d", &numProducts);

    products = malloc(numProducts * sizeof(struct Products));

    for(i = 0; i < numProducts; i++){
        scanf("%s", products[i].productName);
        scanf("%lf", &products[i].productPrice);
        scanf("%d", &products[i].availableQuantity);
    }

    scanf("%d", &numToBuy);

    char (*shoppingList)[41];

    shoppingList = malloc(numToBuy * sizeof(*shoppingList));

    for(i = 0; i < numToBuy; i++){
        scanf("%s", shoppingList[i]);
    }

    for(i = 0; i < numToBuy; i++){
        for(j = 0; j < numProducts; j++){
            if(strcmp(shoppingList[i], products[j].productName) == 0 && products[j].availableQuantity > 0){
                products[j].availableQuantity--;
                totalPrice += products[j].productPrice;
            }
        }
    }
    printf("%.2lf\n", totalPrice);

    free(shoppingList);
    free(products);

    return 0;
}