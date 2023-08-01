#include <stdio.h>
 
int main() {
 
    int tempo, velocidade_media;
    double  distancia, km_litro, litros_consumidos;

    km_litro = 12;

    scanf("%d", &tempo);
    scanf("%d", &velocidade_media);

    distancia = velocidade_media * tempo;

    litros_consumidos = distancia / km_litro;

    printf("%.3lf\n", litros_consumidos);
 
    return 0;
}