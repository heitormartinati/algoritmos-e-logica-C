#include <stdio.h>

int main(){
    double x,result,termo;
    int n,i;
    result = 1;
    termo = 1;
    scanf("%lf %d", &x, &n);

    for (i = 1; i < n;i++){
        termo *= x/i;
        result += termo;
    }
    printf("%.5lf\n", result);
    return 0;
}