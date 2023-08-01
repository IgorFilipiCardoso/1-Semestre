#include <stdio.h>

int main()
{
    
    int num;

    scanf("%d" , &num);

    if (num > 0)
    {
        num = num * 2; 
        printf("O dobro do numero positvo foi %d", num);
    }

    else if (num < 0)
    {
        num = num * 3;
        printf("O triplo do numero negativo foi %d", num);
    }

    else
    {
        printf("O número digitado foi zero, ue");
    }

    return 0;
}
