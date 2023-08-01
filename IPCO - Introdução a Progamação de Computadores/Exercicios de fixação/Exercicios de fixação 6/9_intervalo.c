#include <stdio.h>

int subtracao(int m, int n);

int main()
{
    int m, n, count = 0;
    int maior, menor;
    scanf("%d %d", &m, &n);

    if (m > n)
    {
        menor = n;
        maior = m;
    }
    else
    {
        menor = m;
        maior = n;
    }
    

    while (menor != maior)
    {

        if (((menor % 2) == 0) && ((menor % 3) == 0))
        {
            count++;
        }

        menor++;
    }
    
    printf("\n\nTem %d numeros divisiveis por 2 e 3 entre %d e %d.\n\n" , count, m, n);

    return 0;
}
