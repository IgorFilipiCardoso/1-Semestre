#include <stdio.h>
#define SIZE 2000

void print(int count[]);

int main()
{
    int i;
    char opiniao;
    int count[5];

    for (i = 0; i < 5; i++)
    {
        count[i] = 0;
    }
    

    for (i = 0; i < SIZE; i++)
    {
        printf("\nPessoa numero [%d] - Concorda? \n", i+1);
        printf("(a) - Não concordo totalmente\n");
        printf("(b) - Não concordo parcialmente\n");
        printf("(c) - Indiferente\n");
        printf("(d) - Concordo parcialmente\n");
        printf("(e) - Concordo totalmente\n ");
        scanf(" %c", &opiniao);

        switch (opiniao)
        {
        case 'a':
            count[0]+= 1;
            break;
        case 'b':
            count[1]+= 1;
            break;
        case 'c':
            count[2]+= 1;
            break;
        case 'd':
            count[3]+= 1;
            break;
        case 'e':
            count[4]+= 1;
            break;
        }
    }

    print(count);

    return 0;
}

void print(int count[])
{
    int i, j;

    printf("\n**HISTOGRAMA**\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nItem [%d]: ", i+1);

        for (j = 0; j < (count[i] / 5); j++)
        {
            printf("*");
        }
    }

    printf("\n\n");
}