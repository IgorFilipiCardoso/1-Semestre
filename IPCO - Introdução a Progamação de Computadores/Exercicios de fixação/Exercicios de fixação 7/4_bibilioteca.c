/*
4. Considere que a instituição possui um cadastro de seus alunos com os seguintes dados: • Aluno(prontuario, nome) Possui também um cadastro dos livros existentes na biblioteca com os seguintes dados: • Livro(ISBN, titulo) Devemos implementar um sistema que permita o cadastro eletrônico dos alunos e dos livros da instituição. O sistema deve permitir o empréstimo de livros da biblioteca aos alunos e deve armazenar os dados de qual livro está com qual aluno. O sistema deve imprimir uma lista com os livros emprestados para cada um dos alunos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define SIZE 50

struct type_livro
{
    int ISBN;
    char titulo[30];
    int emprestado;
    int aluno;
};
struct type_aluno
{
    char nome[40];
    int prontuario;
};

void add_livro(struct type_livro livro[], int livro_count);
void add_aluno(struct type_aluno aluno[], int aluno_count);
int emprestar(struct type_aluno aluno[], struct type_livro livro[], int aluno_count, int livro_count);
void show_books(struct type_aluno aluno[], struct type_livro livro[], int livro_count, int emprestados_count);

int main()
{

    struct type_aluno aluno[SIZE];
    struct type_livro livros[SIZE];
    int stop = FALSE, option;
    int livro_count, aluno_count, emprestados_count;

    livro_count = aluno_count = emprestados_count = 0;

    while (!stop)
    {
        system("cls");
        printf("\n-----------Biblioteca----------\n");
        printf("\n[1] -> Cadastrar livro\n");
        printf("[2] -> Cadastrar aluno\n");
        printf("[3] -> Emprestar livro\n");
        printf("[4] -> Listar livros emprestador\n");
        printf("[0] -> Sair\n");

        printf("\n[R]: ");
        scanf("%d", &option);
        system("cls");

        switch (option)
        {
        case 0:
            printf("Voce escolheu sair...\n\n");
            stop = TRUE;
            break;
        case 1:
            add_livro(livros, livro_count);
            livro_count++;
            break;
        case 2:
            add_aluno(aluno, aluno_count);
            aluno_count++;
            break;
        case 3:
            emprestados_count += emprestar(aluno, livros, aluno_count, livro_count);
            break;
        case 4:
            show_books(aluno, livros, livro_count, emprestados_count);
            break;
        }
    }

    return 0;
}

void add_livro(struct type_livro livro[], int livro_count)
{
    char a;

    printf("\n-----Cadastro de livros--------\n");

    printf("\nDigite o nome do livro: ");
    scanf("%s", livro[livro_count].titulo);

    printf("\nDigite o ISBN do livro: ");
    scanf("%d", &livro[livro_count].ISBN);

    printf("\nLivro adicionado!\n");

    printf("\n\nDigite qualquer tecla para continuar...");
    scanf(" %c", &a);
}
void add_aluno(struct type_aluno aluno[], int aluno_count)
{
    char a;

    printf("\n-----Cadastro de alunos--------\n");

    printf("\nDigite o nome do aluno: ");
    scanf("%s", aluno[aluno_count].nome);

    printf("\nDigite o prontuario do aluno: ");
    scanf("%d", &aluno[aluno_count].prontuario);

    printf("\nAluno adicionado!\n");

    printf("\n\nDigite qualquer tecla para continuar...");
    scanf(" %c", &a);
}
int emprestar(struct type_aluno aluno[], struct type_livro livro[], int aluno_count, int livro_count)
{
    int prontuario;
    int i, j;
    char titulo[30];
    int find = FALSE;
    int find2 = FALSE;
    char a;

    printf("\n--------Emprestar livro--------\n");

    printf("\nDigite o prontuario: ");
    scanf(" %d", &prontuario);

    for (i = 0; i < aluno_count; i++)
    {
        if (prontuario == aluno[i].prontuario)
        {
            find = TRUE;

            printf("\nDigite o nome do livro deseja emprestar: ");
            scanf("%s", titulo);

            for (j = 0; j < livro_count; j++)
            {
                if (stricmp(titulo, livro[j].titulo) == 0)
                {
                    find2 = TRUE;

                    if (livro[j].emprestado != TRUE)
                    {
                        livro[j].emprestado = TRUE;
                        livro[j].aluno = i;

                        printf("\n%s esprestado!\n", livro[j].titulo);

                        printf("\n\nDigite qualquer tecla para continuar...");
                        scanf(" %c", &a);

                        return 1;
                    }
                }
            }
        }
    }

    if (!find)
    {
        printf("\nProntuario nao encontrado!");
    }

    if (!find2)
    {
        printf("\nLivro nao encontrado!\n\n");
    }

    printf("\n\nDigite qualquer tecla para continuar...");
    scanf(" %c", &a);

    return 0;
}
void show_books(struct type_aluno aluno[], struct type_livro livro[], int livro_count, int emprestados_count)
{
    int i;
    char a;

    printf("\n\n-----%d livros emprestados------\n", emprestados_count);

    for (i = 0; i < livro_count; i++)
    {
        if (livro[i].emprestado == TRUE)
        {
            printf("\nLivro: %s", livro[i].titulo);
            printf("\nISBN: %d", livro[i].ISBN);
            printf("\nAluno que alugou: %s", aluno[livro[i].aluno].nome);
            printf("\nProntuario: %d\n\n", aluno[livro[i].aluno].prontuario);
        }
    }

    printf("\n\nDigite qualquer tecla para continuar...");
    scanf(" %c", &a);
}