#include <stdio.h>


void quadrado(int n){
    printf("\nSeja bem-vindo aos Programas iterativos\n");
    printf("\nExercício 1:\n\n");
    int i,j;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
            if(j!=(n-1))
                printf("#");
            else
                printf("#\n");
        }
    }
    printf("\n");
}


void xadrez(int n){
    printf("\nExercício 2:\n\n");
    int i,j;
    for(i = 0;i<n;i++)
    {
        if(i%2 == 0)
        {
            for(j = 0;j<n;j++)
            {
                if(j%2 == 0 && j == (n-1))
                    printf("#\n");
                else if(j%2 == 0 && j != (n-1))
                    printf("#");
                else if(j%2 != 0)
                    printf("_");
            }
        }

        else
        {
            for(j = 0;j<n;j++)
            {
                if(j%2 == 0 && j == (n-1))
                    printf("_\n");
                else if(j%2 == 0 && j != (n-1))
                    printf("_");
                else if(j%2 != 0)
                    printf("#");
            }
        }
    }
    printf("\n");
}


void triangulo1 (int n){
    int i,j;
    for(i=0;i<n;i++)
    {
       
            int x = 0;
            while(x!=i){
                printf("#");
                x++;
            }
            if(x==i)
                printf("#\n");
    }
    for(i=n-2;i>-1;i--)
    {
       
            int x = n;
            while(x!=n-i){
                printf("#");
                x--;
            }
            if(x==n-i)
                printf("#\n");
    }
}

int main()
{
    quadrado(5);
    xadrez(5);
    triangulo1(5);
    return 0;
}