#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int x = 0, n = 0, N = 0;

    scanf("%d", &N);

    while (x != (N + 1))
    {
        n++;

        if ((n % 2) != 0)
        {
            printf("%d\n", n);
        }
        x++;
    }

    return 0;
}
