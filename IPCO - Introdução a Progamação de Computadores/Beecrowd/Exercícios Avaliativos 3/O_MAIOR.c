#include <stdio.h>
#include <stdlib.h>
 
int maior_ab(int a, int b);
int maior_bc(int a, int b, int c);

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", maior_bc(a, b, c));

    return 0;
}

int maior_ab(int a, int b){
    return (a + b + abs(a - b)) / 2;
}

int maior_bc(int a, int b, int c){
    return (maior_ab(a, b) + c + abs(maior_ab(a, b) - c)) / 2;
}