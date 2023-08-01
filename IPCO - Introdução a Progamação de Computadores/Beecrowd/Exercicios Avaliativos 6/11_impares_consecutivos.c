#include <stdio.h>

int main()
{
    int num1, num2, temp;
    int i, n;

    scanf("%d", &n);

    int soma[n];

    for (i = 0; i < n; i++)
    {
        soma[i] = 0;

        scanf("%d %d", &num1, &num2);

        if (num2 > num1)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        
        if (num1 != num2)
        {
            while ((num2++) != (num1 -1))
            {

                if ((num2 % 2) != 0)
                {
                    soma[i] += num2;
                }

            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d\n", soma[i]);
    }
    
    
    
    return 0;
}
