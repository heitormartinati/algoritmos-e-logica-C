#include <stdio.h>
#include <math.h>
double calcular_tempo(int x1, int y1, int x2, int y2, int vel_media){
    double distancia_x, distancia_y;
    double distancia_total;
    distancia_x = pow(x1 - x2, 2);
    distancia_y = pow(y1 - y2, 2);
    distancia_total = sqrt(distancia_x + distancia_y);
    return distancia_total / vel_media;
}
int main(){
    int x1, x2, y1, y2, vel_media;
    double tempo;
    scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &vel_media);
    tempo = calcular_tempo(x1,y1,x2,y2,vel_media);
    printf("%.2lf", tempo);
    return 0;
}