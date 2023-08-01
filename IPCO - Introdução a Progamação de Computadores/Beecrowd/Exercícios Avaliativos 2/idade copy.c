#include <stdio.h>

int main()
{
    
    int idade, anos, meses, meses, dias;

    scanf("%d", &idade);

    anos = idade / 365;
    idade = idade - anos *365;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}
