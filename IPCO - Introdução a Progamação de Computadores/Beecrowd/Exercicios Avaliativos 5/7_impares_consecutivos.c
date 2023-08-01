#include <stdio.h>

int main()
{
    int num1, num2, temp, soma = 0;

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
                soma += num2;
            }

        }
    }
    printf("%d\n", soma);
    
    return 0;
}
