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

    while (x <= y)
    {
        if ((x % 13) != 0)
        {
            temp += x;
        }
        x++;
    }
    
    printf("%d\n", temp);

    return 0;
}


