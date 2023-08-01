#include <stdio.h>

int main(void)
{

    int num, temp, fixo, x = 1;
    
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    temp = num;
    fixo = num;

    while (x  < fixo)
    {
        temp -= 1;
        num = num * temp;
        x += 1;
    }

    printf("\nFat: %d\n\n", num);
    
    return 0;
}
