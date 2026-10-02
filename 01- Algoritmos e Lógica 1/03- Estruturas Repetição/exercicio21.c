#include <stdio.h>

int main(){
    int m,i;
    double n, result;
    scanf("%lf %d", &n, &m);

    result = 1;

    for(i = 1; i <= m; i++){
        result *= n;
    }
    printf("%.2lf", result);

    return 0;
}