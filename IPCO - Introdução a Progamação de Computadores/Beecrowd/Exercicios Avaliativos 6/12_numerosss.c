#include <stdio.h>
  
int main() {
  
  
    int M,N,maior,i,menor,soma=0;
 
    scanf("%d %d",&M,&N);
    
    while(M>0 && N>0)
    {
            
            
        if (M>=N)
        {
            maior = M;
            menor = N;
        }
        else
        {
            maior = N;
            menor = M;
        }

        for (i = menor; i<=maior; i++)
        {
            soma = soma+i;
                
            printf("%d ",i);  
        }

        printf("Sum=%d\n",soma);
            
        scanf("%d %d",&M,&N);
            
        soma = 0;
                
    }
    return 0;
}