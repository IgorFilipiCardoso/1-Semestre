#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int x = 1, n;

    while (x < 101)
    {
        n++;

        if ((n % 2) == 0)
        {
            printf("%d\n", n);
        }
        x++;
    }
    

    return 0;
}
