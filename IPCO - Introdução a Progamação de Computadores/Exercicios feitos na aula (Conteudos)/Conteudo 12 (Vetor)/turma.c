#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

void cadastro(int idade[], int sexo[], char nomes[][40]);
void listagem(int idade[], int sexo[], char nomes[][40], int type, int count_alunos);
void todos(int idade[], int sexo[], char nomes[][40], int count_alunos);
void sexos(int idade[], int sexo[], char nomes[][40], int count_alunos);
void idades(int idade[], int sexo[], char nomes[][40], int count_alunos);
int menu();

int main()
{

    int idade[40];
    int sexo[40];
    char nomes[40][40];
    int continuar = TRUE;
    int temp, count_alunos = 0;

    while (continuar == TRUE)
    {

        temp = menu();

        switch (temp)
        {
        case 1:
            cadastro(idade, sexo, nomes);
            count_alunos += 1;
            break;
        case 2:
            listagem(idade, sexo, nomes, 0, count_alunos);
            break;
        case 3:
            listagem(idade, sexo, nomes, 1, count_alunos);
            break;
        case 4:
            listagem(idade, sexo, nomes, 2, count_alunos);
            break;
        case 0:
            continuar = FALSE;
            break;
        }
    }

    return 0;
}
void cadastro(int idade[], int sexo[], char nomes[][40])
{
    int count;
    char sexo_temp[8];

    for (count = 0; count < 40; count++)
    {
        printf("Cadastro do aluno %d: \n ----------------\n", count + 1);

        // Nome
        printf("\nDigite o nome: ");
        fgets(nomes[count], 40, stdin);

        // Idade
        printf("\nDigite a idade: ");
        scanf("%d", &idade[40]);

        // Sexo
        printf("Digite o sexo(M/F/Outro): ");
        scanf(" %c", sexo_temp);

        // Trocar o sexo para número
        switch (sexo_temp[0])
        {
        case 'M':
            sexo[count] = 0;
            break;
        case 'F':
            sexo[count] = 1;
            break;
        case 'O':
            sexo[count] = 2;
            break;
        }
    }
}
int menu()
{
    int temp;

    printf("\n** ------------------- **\n");
    printf("\n[1] - Cadastrar aluno");
    printf("\n[2] - Listar Alunos");
    printf("\n[3] - Listar alunos por sexo");
    printf("\n[4] - Listar alunos por idade");
    printf("\n[0] - Encerrar progama\n");
    scanf("%d", &temp);

    return temp;
}
void listagem(int idade[], int sexo[], char nomes[][40], int type, int count_alunos)
{
    switch (type)
    {
    case 0:
        todos(idade, sexo, nomes, count_alunos);
        break;
    case 1:
        sexos(idade, sexo, nomes, count_alunos);
        break;
    case 2:
        idades(idade, sexo, nomes, count_alunos);
        break;
    }
}
void todos(int idade[], int sexo[], char nomes[][40], int count_alunos)
{
    int i;
    char sexo_transformado[10];

    for (i = 0; i < count_alunos; i++)
    {
        switch (sexo[i])
        {
        case '0':
            strcpy(sexo_transformado, "Masculino");
            break;
        case '1':
            strcpy(sexo_transformado, "Feminino");
            break;
        case '2':
            strcpy(sexo_transformado, "Outro");
            break;
        }

        printf("SEXO ---- NOME ---- IDADE\n");
        printf("%s ---- %s ---- %d", sexo_transformado, nomes[i], idade[i]);
    }
}
void sexos(int idade[], int sexo[], char nomes[][40], int count_alunos)
{
    int i;
    char sexo_transformado[10];
    char sexu[10];

    printf("Por qual sexo deseja filtrar (M/F/Outros): ");
    scanf(" %c", sexu);

    switch (sexu[0])
    {
    case 'M':
        for (i = 0; i < count_alunos; i++)
        {
            if (sexo[i] == 0)
            {
                switch (sexo[i])
                {
                case '0':
                    strcpy(sexo_transformado, "Masculino");
                    break;
                case '1':
                    strcpy(sexo_transformado, "Feminino");
                    break;
                case '2':
                    strcpy(sexo_transformado, "Outro");
                    break;
                }

                printf("SEXO ---- NOME ---- IDADE\n");
                printf("%s ---- %s ---- %d", sexo_transformado, nomes[i], idade[i]);
            }
        }

        break;
    case 'F':
        for (i = 0; i < count_alunos; i++)
        {
            if (sexo[i] == 1)
            {
                switch (sexo[i])
                {
                case '0':
                    strcpy(sexo_transformado, "Masculino");
                    break;
                case '1':
                    strcpy(sexo_transformado, "Feminino");
                    break;
                case '2':
                    strcpy(sexo_transformado, "Outro");
                    break;
                }

                printf("SEXO ---- NOME ---- IDADE\n");
                printf("%s ---- %s ---- %d", sexo_transformado, nomes[i], idade[i]);
            }
        }
        break;
        case 'O':
            for (i = 0; i < count_alunos; i++)
            {
                if (sexo[i] == 2)
                {
                    switch (sexo[i])
                    {
                    case '0':
                        strcpy(sexo_transformado, "Masculino");
                        break;
                    case '1':
                        strcpy(sexo_transformado, "Feminino");
                        break;
                    case '2':
                        strcpy(sexo_transformado, "Outro");
                        break;
                    }

                    printf("SEXO ---- NOME ---- IDADE\n");
                    printf("%s ---- %s ---- %d", sexo_transformado, nomes[i], idade[i]);
                }
            }
            break;
    }
}
void idades(int idade[], int sexo[], char nomes[][40], int count_alunos)
{
    int idade_stop, i;
    char sexo_transformado[10];

    printf("Acima de que idade gostaria de filtrar? ");
    scanf("%d", &idade_stop);

    for (i = 0; i < count_alunos; i++)
    {
        if (idade[i] >= idade_stop)
        {
            switch (sexo[i])
            {
            case '0':
                strcpy(sexo_transformado, "Masculino");
                break;
            case '1':
                strcpy(sexo_transformado, "Feminino");
                break;
            case '2':
                strcpy(sexo_transformado, "Outro");
                break;
            }

            printf("SEXO ---- NOME ---- IDADE\n");
            printf("%s ---- %s ---- %d", sexo_transformado, nomes[i], idade[i]);
        }
    }
}