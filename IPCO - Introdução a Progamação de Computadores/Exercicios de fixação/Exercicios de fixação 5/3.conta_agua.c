#include <stdio.h>

float calc_res(float conta, float metros);
float calc_com(float conta, float metros);
float calc_ind(float conta, float metros);

int main()
{

    float conta, metros, calc;
    char tipo[25];
   
   printf("\nDigite a conta: ");
   scanf("%f", conta);

   printf("\nDigite o seu tipo: ");
   scanf("%s", tipo);

   printf("\nDigite o consumo em metros cubicos: ");
   scanf("%f", metros);

   switch (tipo)
   {
    case "Residencial":
        calc = calc_res(conta, metros);
        printf("Valor a ser pago é de R$%.2f", calc)
    break;

    case "Comercial":
        calc = calc_com(conta, metros);
        printf("Valor a ser pago é de R$%.2f", calc)
    break;

       case "Industrial":
        calc = calc_ind(conta, metros);
        printf("Valor a ser pago é de R$%.2f", calc)
    break;
   
    default:
        printf("Digite corretamente!!");
    break;
   }

    return 0;
}

float calc_res(float conta, float metros){
    
}
float calc_com(float conta, float metros){

}
float calc_ind(float conta, float metros){

}