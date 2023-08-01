#include <stdio.h>

int maior(int a, int b, int c);

int main()
{
    
    int a, b, c;
    int d, e, f;
    int g, h ,i;
    int j;

    printf("\nDigite 10 numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    scanf("%d %d %d", &g, &h, &i);
    scanf("%d", &j);

    a = maior(a, b, c);
    b = maior(d, e, f);
    c = maior(g, h, i);
    d = maior(a, b, c);
    e = maior(d, j, 0);

    printf("\nO maior numero é %d\n", e);

    return 0;
}

maior(int a, int b, int c){

    float trocar_valor;

    if (c > a)
    {
        trocar_valor = a;
        a = c;
        c = trocar_valor;
    }

    if (b > a)
    {
        trocar_valor = a;
        a = b;
        b = trocar_valor;
    }

    if (c > b)
    {
        trocar_valor = b;
        b = c;
        c = trocar_valor;
    }

    return a;
}
