#include <stdio.h>

int main()
{
    int n, count = 0, x;
    int count_intervalo = 0, count_fora = 0;
    scanf("%d", &n);

    while (count < n)
    {
        scanf("%d", &x);

        if (x == 0)
        {
            printf("NULL");
        }
        if ((x % 2) == 0 && x != 0)
        {
            printf("EVEN");
        }
        if ((x % 2) != 0)
        {
            printf("ODD");
        }
        if (x > 0)
        {
            printf(" POSITIVE");
        }
        if (x < 0)
        {
            printf(" NEGATIVE");
        }

        printf("\n");
        
        count++;
    }

    return 0;
}
