#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma=0, x, contador=0;

    while(contador <= 2){
        scanf("%f", &x);
        if(x >= 0 && x <= 10){
            soma += x;
            contador++;
            if(contador == 2){
                printf("media = %.2f\n", (soma)/2);
                break;
            }
        }
        else
            printf("nota invalida\n");
    }

    return 0;
} 
