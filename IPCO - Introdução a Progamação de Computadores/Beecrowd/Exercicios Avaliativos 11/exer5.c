#include <stdio.h>

int main() {
    int inicial, qtd_testes, i, valor;
    int D, E, F;
    char operation, name, name2;
    
    scanf("%d%d", &inicial, &qtd_testes);

    D = E = F = inicial;

    for (i = 0; i < qtd_testes; i++)
    {
        scanf(" %c", &operation);

        if (operation == 'A')
        {
            scanf(" %c", &name);
            scanf(" %c", &name2);
            scanf("%d", &valor);
            
            if (name == 'D'){
                D += valor;
            }

            else
            {
                if (name == 'E'){
                    E += valor;
                }

                else
                {
                    if (name == 'F'){
                        F += valor;
                    }  
                }   
            }

            name = name2;

            if (name == 'D'){
                D -= valor;
            }

            else
            {
                    
                if (name == 'E'){
                    E -= valor;
                }

                else
                {
                    if (name == 'F'){
                        F -= valor;
                    } 
                }
            }
        }
        
        else
        {
            scanf(" %c", &name);
            scanf("%d", &valor);
        
            if (operation == 'C')
            {
                if (name == 'D'){
                    D -= valor;
                }

                else
                {
                    if (name == 'E'){
                        E -= valor;
                    }

                    else
                    {
                        if (name == 'F'){
                            F -= valor;
                        } 
                    }
                }
            }

            if (operation == 'V')
            {
                if (name == 'D'){
                    D += valor;
                }

                else
                {
                    if (name == 'E'){
                        E += valor;
                    }
                    
                    else
                    {
                        if (name == 'F'){
                            F += valor;
                        }   
                    }
                }
            }
        }
    }

    printf("%d %d %d\n", D, E, F);

    return 0;
}