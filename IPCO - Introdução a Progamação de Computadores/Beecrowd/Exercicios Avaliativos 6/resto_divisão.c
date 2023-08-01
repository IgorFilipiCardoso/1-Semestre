#include <stdio.h>

int main()
{
    
    int x, y;
    int temp;


    scanf("%d %d", &x, &y);

    if (y < x)
    {
        temp = y;
        y = x;
        x = temp;
    }

    temp = 0;
    
    while (x < y)
    {
        x++;
        if ( ((x % 5) == 2) || ((x % 5) == 3))
        {
            printf("%d\n", x);
        }
    }

    return 0;
}