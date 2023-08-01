/*
4. Escreva um programa que leia dois números inteiros, uma operação matemática (+,-,* e faça o cálculo destes números segundo a operação lida. Cada operação deve ser feita por uma função.
*/

#include <stdio.h>

int scanner();
int op_mat();
int soma(int n1, int n2);
int subtracao(int n1, int n2);
int multi(int n1, int n2);
double divisao(int n1, int n2);
void resultado(float calculo);

int main()
{
    
    int num1, num2, op;

    num1 = scanner();
    num2 = scanner();
    op = op_mat();

    if (op == 1)
    {
        resultado(soma(num1, num2));
    }
    else
    {
        if (op == 2)
        {
            resultado(subtracao(num1, num2));
        }
        else
        {
            if (op == 3)
            {
                resultado(multi(num1, num2));
            }
            else
            {
                if (op == 4)
                {
                    resultado(divisao(num1, num2));
                }
                else
                {
                    return 0;
                }
                
                
            }
        }
    }

    return 0;
}

int op_mat(){

    int op;
    printf("\n\nPara escolher a operação digite o número dela: ");
    printf("\n\nSoma          \t [1] ");
    printf("\n\nSubtracao     \t [2] ");
    printf("\n\nMultiplicacao \t [3] ");
    printf("\n\nDivisao       \t [4] ");
    
    printf("\n\n");
    scanf("%d", &op);

    if (op == 1)
    {
        return 1;
    }
    else
    {
        if (op == 2)
        {
            return 2;
        }
        else
        {
            if (op == 3)
            {
                return 3;
            }
            else
            {
                if (op == 4)
                {
                    return 4;
                }
                else
                {
                    printf("\n\nDIGITE UM NUMERO VALIDO!!\n\n");
                    return 5;
                }
                
            }
        }
    }
}
int soma(int n1, int n2){
    return n1 + n2 ;
}
int subtracao(int n1, int n2){
    return n1 - n2 ;
}
int multi(int n1, int n2){
    return n1 * n2 ;
}
double divisao(int n1, int n2){
    return n1 / n2 ;
}
void resultado(float calculo){
    printf("\n\nO resultado foi %.0f\n\n" , calculo);
}
int scanner(){
    int valor;
    printf("\n\nDigite um num: ");
    scanf("%d", &valor);
    return valor;
}