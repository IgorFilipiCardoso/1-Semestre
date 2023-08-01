#include <stdio.h>

void crescente(int a, int b, int c);

int main()
{

    int a, b, c;

    scanf("%d %d %d" , &a, &b, &c);

    crescente(a, b, c);

    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
   
   



    return 0;
}

void crescente(int a, int b, int c)
{
    int troca;

    if (a > c)
    {
        troca = c;
        c = a;
        a = troca;
    }

    if (a > b)
    {
        troca = b;
        b = a;
        a = troca;
    }

    if (b > c)
    {
        troca = c;
        c = b;
        b = troca;
    }
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

}