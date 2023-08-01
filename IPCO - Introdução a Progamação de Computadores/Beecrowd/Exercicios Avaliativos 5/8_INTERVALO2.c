#include <stdio.h>

int main()
{
    int n, count = 0, x;
    int count_intervalo = 0, count_fora = 0;
    scanf("%d", &n);

    while (count < n)
    {
        scanf("%d", &x);

        if (x >= 10 && x <= 20)
        {
            count_intervalo++;
        }
        else
        {
            count_fora++;
        }
        
        count++;
    }
    
    printf("%d in\n", count_intervalo);
    printf("%d out\n", count_fora);

    return 0;
}
