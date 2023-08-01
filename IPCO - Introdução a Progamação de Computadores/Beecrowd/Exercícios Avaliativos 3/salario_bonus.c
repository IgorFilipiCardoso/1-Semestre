#include <stdio.h>
 
double valor();
double total();
double total_vendas();
void nome();

int main() 
{

    nome();
    printf("TOTAL = R$ %.2lf\n", total());

    return 0;
}



double valor(){
    double valor;
    scanf("%lf", &valor);
    return valor;
}

double total(){
    return valor() + total_vendas();
}

double total_vendas(){
    return valor() * 0.15;
}

void nome(){
    char nome[25];
    scanf("%s", &nome);
}