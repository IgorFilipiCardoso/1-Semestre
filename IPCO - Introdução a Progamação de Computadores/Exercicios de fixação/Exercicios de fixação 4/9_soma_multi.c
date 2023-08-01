#include <stdio.h>

int soma(int a, int b);
int multi(int a, int b);

int main()
{
    
    int a, b, c;

    scanf("%d %d", &a, &b);

    if (a == b)
        { c = soma(a, b);}
    else
        {c = multi(a, b);}
    
    printf("O resultado foi %d", c);


    return 0;
}

int soma(int a, int b){return a + b;}
int multi(int a, int b){return a * b;}
