#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (!(num % 3) && !(num % 5))
    {
        printf("É divisivel!!");
    }
    else{
        printf("Não é divisivel!!");
    }

    return 0;
}
