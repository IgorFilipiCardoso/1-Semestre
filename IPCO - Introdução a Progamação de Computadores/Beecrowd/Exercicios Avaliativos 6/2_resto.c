#include <stdio.h>
 
int main() {
 
    int valor = 0, i;

    scanf("%d", &valor);

    for (i = 0; i < 10000; i++)
    {
        if ((i % valor) == 2)
        {
            printf("%d\n", i);
        }
    }
 
    return 0;
}