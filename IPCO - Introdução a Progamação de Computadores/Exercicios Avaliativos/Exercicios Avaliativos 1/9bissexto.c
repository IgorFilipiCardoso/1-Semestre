#include <stdio.h>

int dataValida(int dias, int mes, int ano);
int eh_bissexto(int ano);

int main()
{

    int dias, mes, ano;

    printf("\nDigite o dia: ");
    scanf("%d", &dias);

    printf("\nDigite o mes: ");
    scanf("%d", &mes);

    printf("\nDigite o ano: ");
    scanf("%d", &ano);

    if (dataValida(dias, mes, ano))
    {
        printf("\nValida!\n");
    }
    else
    {
        printf("\nInvalida!\n");
    }
    return 0;
}

int dataValida(int dias, int mes, int ano){
    if (ano > 1900 && ano < 2200)
    {
        if (eh_bissexto(ano))
        {
            if (mes >= 1 && mes <= 12)
            {
                if (mes == 2)
                {
                    if (dias >= 1 && dias <= 29)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }
            
            }
            else
            {
                return 0;
            }
        }    
        else
        {
            if (mes == 2)
            {
                if (dias >= 1 && dias <= 28)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
                
            }
            else
            {

                if ((mes % 2) == 0)
                {
                    if (dias >= 1 && dias <=30)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    
                }
                else
                {
                    if (dias >= 1 && dias <=31)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
        }
    }

    else{
        return 0;
    }
    
}

int eh_bissexto(int ano){

    if ((ano % 4) == 0 && (ano / 100) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}