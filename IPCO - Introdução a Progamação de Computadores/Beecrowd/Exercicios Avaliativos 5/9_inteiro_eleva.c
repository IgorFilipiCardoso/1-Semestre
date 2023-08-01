#include <stdio.h>

int main()
{
    int num = 0, count = 0;
    int num_par = 0, result = 0;

    scanf("%d", &num);

    while (count < num)
    {
        count++;
        if ((count % 2) == 0)
        {
            result = count * count;
            printf("%d^2 = %d\n", count, result);
        }
    }

    return 0;
}
