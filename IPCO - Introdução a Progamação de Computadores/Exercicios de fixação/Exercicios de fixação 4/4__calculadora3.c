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
    
    int num1, num2, op, a = 0;

    while (a == 0)
    {

        printf("\n\nDigite a conta a ser feita: ");
        num1 = scanner();
        op   = op_mat ();
        num2 = scanner();

        if      (op == 1){resultado(soma     (num1, num2));}
        else{if (op == 2){resultado(subtracao(num1, num2));}
        else{if (op == 3){resultado(multi    (num1, num2));}
        else{if (op == 4){resultado(divisao  (num1, num2));}
        else{return 0;}}}}

    }
    
    
    return 0;
}

int op_mat(){

    char op;

    scanf("%s", &op);

    if      (op == '+'){return 1;}
    else{if (op == '-'){return 2;}
    else{if (op == '*'){return 3;}
    else{if (op == '/'){return 4;}
    else{if (op == '#'){return 6;}
    else{return 5;}}}}}
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
    if (n2 == 0)
    {
        printf("Não existe divisão por zero ue!!");
        return 0;
    }
    
    return n1 / n2 ;
}
void resultado(float calculo){
    printf(" = %.0f\n\n" , calculo);
}
int scanner(){
    int valor;
    scanf("%d", &valor);
    return valor;
}