#include <stdio.h>

int entre();
int first_num(int num);
int two_num(int num);
void first_char(int num);
int second_char(int num);


int main()
{
    
    int num;

    printf("\n\nDigite um numero inteiro entre 20 e 59: ");
    scanf("%d", &num);

    if (num < 20 || num > 59)
    {
        printf("não está entre o intervalo :(");
    }

    first_char(num);
    second_char(num);

    return 0;
}

int first_num(int num){

    num = num /10;
    return num;

}
int two_num(int num){
    return num - (first_num(num) * 10);
}
void first_char(int num){

    int number_one;

    number_one = first_num(num);

    if      (number_one == 2){printf("Vinte")    ;}
        else if (number_one == 3){printf("Trinta")   ;}
            else if (number_one == 4){printf("Quarenta") ;}
    else {printf("Cinquenta");}
    
}
int second_char(int num){

    int number_two;
    number_two = two_num(num);


    if      (number_two == 1){printf(" e um\n\n")    ;}
        else if (number_two == 2){printf(" e dois\n\n")  ;}
            else if (number_two == 3){printf(" e tres\n\n")  ;}
                else if (number_two == 4){printf(" e quatro\n\n");}
                    else if (number_two == 5){printf(" e cinco\n\n") ;}
                        else if (number_two == 6){printf(" e seis\n\n")  ;}
                            else if (number_two == 7){printf(" e sete\n\n")  ;}
                                else if (number_two == 8){printf(" e oito\n\n")  ;}
                                    else if (number_two == 9){printf(" e nove\n\n")  ;}
    else return 0;

    return 0;
}

