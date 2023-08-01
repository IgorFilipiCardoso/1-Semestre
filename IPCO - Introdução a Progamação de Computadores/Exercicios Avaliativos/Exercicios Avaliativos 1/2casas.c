#include <stdio.h>

int milhar(int nro);
int centena(int nro);
int dezena(int nro);
int unidade(int nro);

int main(){

    int n;
    
    printf("Digite um valor de 0 a 9999: ");
    scanf("%d", &n);

    if (n < 0 || n > 9999)
    {
        printf("Digite um valor entre 0 e 9999!!");
        return 0;
    }
    

    printf("\nMilhar..: %d", milhar(n));
    printf("\nCentena.: %d", centena(n));
    printf("\nDezena..: %d", dezena(n));
    printf("\nUnidade.: %d", unidade(n));

    return 0;
}

int milhar(int nro){
    return nro / 1000;
}
int centena(int nro){
    return (nro / 100) - milhar(nro) * 10;
}
int dezena(int nro){
    return  (nro - ((milhar(nro) * 1000) + (centena(nro) * 100))) / 10;
}
int unidade(int nro){
    return (nro) - ((milhar(nro) * 1000) + (centena(nro) * 100) + (dezena(nro) * 10));
}
