#include <stdio.h>

int main(){
    int n, den1 = 2, den2 = 4, i;
    double sum = 0;

    scanf("%d", &n);

    for(i = 0 ; i < n; i++){
        sum += (double)(n - i) / (den1 * den2);
        den1 += 4;
        den2 += 4;
    }

    printf("%.4lf", sum);
    return 0;
}