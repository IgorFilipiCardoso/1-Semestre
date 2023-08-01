#include <stdio.h>

    float dia_prom_calc(float dia);
    float valor_calc(float dia);
    float valor_prom_calc(float dia);
    float rend_calc(float dia);
    float valor_sem_prom_calc(float dia);
    float ap();
    float ap_prom();

int main()
{
    
    float dia;

    printf("\n\nDigite o valor da diaria: ");
    scanf("%f", &dia);

    printf("\n\nO valor da diaria durante a promoção é R$%.2f;\n", dia_prom_calc(dia));
    printf("\nO valor médio arrecadado sem a promoção, durante um mês é R$%.2f;\n", valor_sem_prom_calc(dia));
    printf("\nO valor médio arrecadado com a promoção, durante um mês é R$%.2f;\n", valor_prom_calc(dia));
    printf("\nO Lucro ou prejuízo da promoção é R$%.2f.\n\n", rend_calc(dia));

    return 0;
}

    float dia_prom_calc(float dia){
        return dia * 0.78;
    }

    float valor_sem_prom_calc(float dia){

        return (dia * ap()) * 30;
    }

    float valor_prom_calc(float dia){

        float valor_prom, valor22;

        valor_prom = (dia_prom_calc(dia) * ap_prom()) * 8;
        valor22 = (dia * ap()) * 22;
        
        return valor_prom + valor22;
    }

    float rend_calc(float dia){
        return valor_prom_calc(dia) - valor_sem_prom_calc(dia);
    }

    float ap(){
        return 42 * 0.4;
    }

    float ap_prom(){
        return 42 * 0.7;
    }