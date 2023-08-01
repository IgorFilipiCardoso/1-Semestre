#include <stdio.h>

float consumo_medio(int dist, float combus);

int main()
{
    
    int dist;
    float combus;

    scanf("%d", &dist);
    scanf("%f", &combus);

    printf("%.3f km/l\n", consumo_medio(dist, combus));

    return 0;
}

float consumo_medio(int dist, float combus){
    return dist / combus;
}