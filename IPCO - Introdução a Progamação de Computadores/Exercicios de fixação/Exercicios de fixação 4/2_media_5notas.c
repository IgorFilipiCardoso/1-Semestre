/*
2. Implemente um programa que leia 5 notas, calcule a média dessas notas e escreva Reprovado (média < 5), Recuperação (média >= 5 e < 7) ou Aprovado (média > 7). A impressão da mensagem deve ser realizada por uma função.
*/

#include <stdio.h>

int digite_nota();
int media_calc(int nota1, int nota2, int nota3, int nota4, int nota5);
int aprovado(int media);
int recuperacao(int media);
void aprovado_msg();
void recuperacao_msg();
void reprovado_msg();



int main()
{
    int nota1,nota2,nota3,nota4,nota5, media;

    nota1 = digite_nota();
    nota2 = digite_nota();
    nota3 = digite_nota();
    nota4 = digite_nota();
    nota5 = digite_nota();
   
    media = media_calc(nota1, nota2, nota3, nota4, nota5);

    if (aprovado(media) == 1)
    {
        aprovado_msg();
    }
    else
    {
        if (recuperacao(media) == 1)
        {
            recuperacao_msg();
        }
        else
        {
            reprovado_msg();
        }
        
    }


    return 0;
}

int digite_nota(){
    int num;
    printf("\nDigite nota: ");
    scanf("%d", &num);
    return num;
}
int media_calc(int nota1, int nota2, int nota3, int nota4, int nota5){
    int media;
    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
    return media;
}
int aprovado(int media){
    if (media >= 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int recuperacao(int media){

        if (media >= 5 && media < 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void aprovado_msg(){
    printf("\n\nAPROVADO!!\n\n");
}
void recuperacao_msg(){
    printf("\n\nRECUPERAÇÃO HAHA!\n\n");
}
void reprovado_msg(){
    printf("\n\nREPROVADO, TENTE NA PRÓXIMA!!\n\n");
}
