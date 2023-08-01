#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int x = 0, n = 0, N = 0;

    scanf("%d", &N);

    n = N + 12;
    
    while (n > N)
    {
        
        if ((N % 2) != 0)
        {
            printf("%d\n", N);
        }

        N++;
    }

    return 0;
}
