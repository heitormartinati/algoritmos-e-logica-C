#include <stdio.h>

int main(){
    int n,num[100],i,j,cont ,aux,min;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(num[j] < num[aux]){
                min = j;
            }
            if(i != min){
                aux = num[i];
                num[i] = num[min];
                num[min] = aux;
            }
        }
    }

    for(i = 0; i < n;  i++){
        for(j = 0; j < n; j++){
            if(num[i] == num[j]){
                cont++;
            }
        }
        printf("%d %d\n",  num[i], cont);

        cont = 0;
    }
    return 0;
}