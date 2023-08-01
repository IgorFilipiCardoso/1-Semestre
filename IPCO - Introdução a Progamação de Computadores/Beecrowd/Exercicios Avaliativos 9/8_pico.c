#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{

    int landscapes;
    int i, type;

    scanf("%d", &landscapes);

    int height[landscapes];

    for (i = 0; i < landscapes; i++)
    {
        scanf("%d", &height[i]);
    }

    if (landscapes > 2)
    {
        i = 2;
        while (i < landscapes)
        {
            if ((height[i - 2] > height[i - 1] && height[i - 1] < height[i]) || (height[i - 2] < height[i - 1] && height[i - 1] > height[i]))
            {
                type = 1;
            }
            else
            {
                type = 0;
                i = landscapes;
            }
            i++;
        }
    }
    else
    {
        if (height[0] != height[1])
            type = 1;
    }

    printf("%d", type);

    return 0;
}