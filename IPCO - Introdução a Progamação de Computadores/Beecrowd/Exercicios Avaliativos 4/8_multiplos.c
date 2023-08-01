#include <stdio.h>

int multiplos(int a, int b);

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    if (multiplos(a, b))
    {
       printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}

int multiplos(int a, int b)
{
    return (((a % b) == 0) || ((b % a) == 0));
}