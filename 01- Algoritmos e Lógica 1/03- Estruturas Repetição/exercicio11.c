#include <stdio.h>
#include <math.h>

int main(){
    int a, b, x, eq;
    scanf("%d %d", &a, &b);

    for(x = a; x <= b; x++){
        eq = pow(x,2) - 4 * x + 5;
        printf("%d\n", eq);
    }
    return 0;
}