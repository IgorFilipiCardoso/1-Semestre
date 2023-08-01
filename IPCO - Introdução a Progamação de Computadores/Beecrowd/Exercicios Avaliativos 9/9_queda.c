#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{

    int i, speed;
    int going = TRUE;

    scanf("%d", &speed);

    int rpm[speed - 1];

    for (i = 0; i < speed; i++)
    {
        scanf("%d", &rpm[i]);
    }

    i = 1;
    while (going == TRUE && i < speed)
    {
        if (rpm[i] < rpm[i - 1])
        {
            going = FALSE;
            printf("%d\n", i + 1);
        }

        i++;
    }

    if (going == TRUE)
    {
        printf("0\n");
    }

    return 0;
}