#include <stdio.h>
 
int main() {
 
    int num, qnt_horas;
    float valor_hora, salario;

    scanf("%d", &num);
    scanf("%d", &qnt_horas);
    scanf("%f", &valor_hora);

    salario = valor_hora * qnt_horas;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}