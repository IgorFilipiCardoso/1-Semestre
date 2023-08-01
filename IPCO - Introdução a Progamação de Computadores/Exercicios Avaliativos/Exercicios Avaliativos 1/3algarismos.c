#include <stdio.h>

int primeiro(num);
int segundo(num);
int terceiro(num);
int quarto(num);

int main()
{   

    int num;

    printf("\nDigite um numero inteiro de 3 algarismos: ");
    scanf("%d", &num);

    if (num < 100 || num > 999)
    {
        printf("\n\nDigite um numero inteiro de 3 algarismos!!");
        return 0;
    }
    else
    {
        printf("\nNumero com 4 algarismos: %d%d\n\n", num, quarto(num));
    }
    
    return 0;
}

int primeiro(num){
    return num / 100;
}
int segundo(num){
    return (num - primeiro(num) * 100) / 10;
}
int terceiro(num){
    return (num - (segundo(num) * 10) - (primeiro(num) * 100));
}
int quarto(num){

    int controle;

    controle = (primeiro(num) + (segundo(num) * 3) + (terceiro(num) * 5)) % 7;
}
