#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            if (n1 > n4)
            {
                printf("O maior número é %d\n\n", n1);
            }
        }
    }

    if (n2 > n1)
    {
        if (n2 > n3)
        {
            if (n2 > n4)
            {
                printf("O maior número é %d\n\n", n2);
            }
        }
    }    

    if (n3 > n1)
    {
        if (n3 > n2)
        {
            if (n3 > n4)
            {
                printf("O maior número é %d\n\n", n3);
            }
        }
    }   

    if (n4 > n1)
    {
        if (n4 > n2)
        {
            if (n4 > n3)
            {
                printf("O maior número é %d\n\n", n4);
            }
        }
    }   
    
    return 0;
}
