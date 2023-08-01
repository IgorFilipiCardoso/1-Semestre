#include <stdio.h>

int isosceles(int a, int b, int c);
int equilatero(int a, int b, int c);
int escaleno(int a, int b, int c);
int triangulo(int a, int b, int c);

int main()
{
    int a, b ,c;
    
    scanf("%d %d %d", &a, &b, &c);

    if (triangulo(a, b, c) == 1)
    {
        if (equilatero(a, b, c)){printf("O triangulo é do tipo equilatero e isosceles\n\n");}
            else if (isosceles(a, b, c)){printf("O triangulo é do tipo isosceles\n\n") ;}
        else {printf("O triangulo é do tipo escaleno\n\n")  ;}
    }
    else
    {
        printf("Não é um tringulo!!");
    }
    



    return 0;
}

int triangulo(int a, int b, int c){

    int soma;

    return ((a + b) > c && (a + c) > b && (b + c) > a);
    
}

int isosceles(int a, int b, int c){
    return (a == b || a == c || b == c);
}
int equilatero(int a, int b, int c){
    return (a == b && a == c);
}
int escaleno(int a, int b, int c){
    return (a != b && a != c && b != c);
}