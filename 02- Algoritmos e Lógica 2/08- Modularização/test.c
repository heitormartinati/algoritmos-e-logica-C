#include <stdio.h>
            
void troca (int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}
int main(){
    int x = 3, y = 10;

    troca(x,y);

    printf("%d\n%d\n", x, y);

    return 0;
}