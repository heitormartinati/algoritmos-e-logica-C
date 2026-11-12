#include <stdio.h>
#include <math.h>
double distancia_coordenada(int x, int z, int vx, int vz){
    double distancia_x, distancia_z; 
    distancia_x = pow(x - vx, 2);
    distancia_z = pow(z - vz, 2);
    return sqrt(distancia_x + distancia_z);
}
int main(){
    int x, z, i;
    int vx[3] = {34, 0, 140};
    int vz[3] = {220, 0, 456};
    char *vilas[3] = {"Hogsmeade" ,"Kakariko", "Solitude"};
    double distancia_total;
    scanf("%d%d", &x, &z);
    for(i = 0; i < 3; i++){
        distancia_total = distancia_coordenada(x, z, vx[i], vz[i]);
        printf("Distancia para %s: %.2lf\n", vilas[i], distancia_total);
    }
    return 0;
}