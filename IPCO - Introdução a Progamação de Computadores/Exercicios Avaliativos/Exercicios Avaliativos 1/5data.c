#include <stdio.h>

int validador(int dia, int mes);
int faz_segundo(int dia, int mes);
void segundo(int dia, int mes);
void primeiro(int dia, int mes);


int main()
{
    int dia, mes;

    printf("Digite a data (Ex: 10 02): ");
    scanf("%d %d", &dia, &mes);

    if (validador(dia, mes))
    {
        if (faz_segundo(dia, mes))
        {
            segundo(dia, mes);
        }
        else
        {
            primeiro(dia, mes);
        }
        
    }
    else
    {
        printf("Digite uma data valida!!");
    }
    
    return 0;
}

int validador(int dia, int mes){

    if (dia > 30 || dia < 1){
        return 0;
    }

    if (mes > 12 || mes < 1){
        return 0;
    }

    return 1;

}
int faz_segundo(int dia, int mes)
{

    if (mes >= 8 ){
        return 1;
    }

    else{
        return 0;
    }
}
void segundo(int dia, int mes){

    printf("Você esta no segundo semestre!");

}
void primeiro(int dia, int mes){

    int dias;

    dias =  (8 * 30) - (dia + (mes * 30));

    printf("Faltam %d dias completos para o 2 semestre!", dias);

}