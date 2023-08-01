#include <stdio.h>

int main()
{

    int a, b, c;

    printf("\nDigite o valor de A:");
    scanf("%d", &a);

    printf("\nDigite o valor de B:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("\n\nO valor da variavél A agora é: %d \n\nO valor da varivél B agora é: %d\n\n", a, b);

    return 0;

}