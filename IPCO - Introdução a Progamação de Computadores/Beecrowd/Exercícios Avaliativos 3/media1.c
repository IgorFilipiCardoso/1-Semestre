#include <stdio.h>

double valor();
double media();

int main()
{
    printf("MEDIA = %.5lf\n", media());
    return 0;
}

double valor(){
    double valor;
    scanf("%lf", &valor);
    return valor;
}

double media(){
    return (3.5 * valor() + 7.5 * valor()) / 11;
}