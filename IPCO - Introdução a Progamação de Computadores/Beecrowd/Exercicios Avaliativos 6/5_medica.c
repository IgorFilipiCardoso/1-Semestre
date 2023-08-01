#include <stdio.h>
 
int main() {
 
    int i, n;
    char animal;
    float cobaias, rat = 0, frog = 0, rabbit = 0, total = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f %c", &cobaias, &animal);

        switch (animal)
        {
        case 'S':
            total += cobaias;
            frog += cobaias;
            break;
        case 'R':
            total += cobaias;
            rat += cobaias;
            break;
        case 'C':
            total += cobaias;
            rabbit += cobaias;
            break;
        }
    }

    printf("Total: %.0f cobaias\n", total); 
    printf("Total de coelhos: %.0f\n", rabbit);
    printf("Total de ratos: %.0f\n", rat);   
    printf("Total de sapos: %.0f\n", frog);   

    rabbit = (rabbit * 100) / total;
    rat = (rat * 100) / total;
    frog = (frog * 100) / total;

    printf("Percentual de coelhos: %.2f %%\n", rabbit);
    printf("Percentual de ratos: %.2f %%\n", rat);
    printf("Percentual de sapos: %.2f %%\n", frog);
 
    return 0;
}