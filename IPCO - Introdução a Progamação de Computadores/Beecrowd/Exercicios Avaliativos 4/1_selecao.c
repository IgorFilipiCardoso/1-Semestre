#include <stdio.h>

int par(int arg);
int positivo(int arg);

int main()
{
    
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((b > c) && (d > a) && (positivo(c)) && (positivo(d)) && (c + d) > (a + b) && (par(a)))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}

int par(int arg){
    if ((arg % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int positivo(int arg){
    if (arg > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}