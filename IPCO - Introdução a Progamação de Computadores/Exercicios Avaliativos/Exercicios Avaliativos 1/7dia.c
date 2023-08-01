#include <stdio.h>

int validador(int hora);
void horario(int hora);

int main()
{
    
    int hora;

    printf("\n\nDigite as horas: ");
    scanf("%d", &hora);

    if (validador(hora))
    {
        horario(hora);
    }
    else
    {
        printf("\n\nDigite uma hora valida!\n");
    }

    return 0;
}

int validador(int hora){
    if (hora > 0 && hora <= 24)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void horario(int hora){
    if (hora >= 6 && hora <= 11)
    {
        printf("Manhã\n");
    }
    else
    {
        if (hora >= 12 && hora <= 17)
        {
            printf("Tarde\n");
        }
        else
        {
            if (hora >= 18 && hora <= 23)
            {
                printf("Noite\n");
            }
            else
            {
                printf("Madrugada\n");
            }
            
        }
        
    }
    
    
}