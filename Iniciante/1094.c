#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, amount, i, coelho=0, rato=0, sapo=0, total=0;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        char type[N];
        scanf("%d %c", &amount, &type[i]);
        if(type[i] == 'C')
            coelho += amount;
        if(type[i] == 'R')
            rato += amount;
        if(type[i] == 'S')
            sapo += amount;
        total += amount;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", ((double)coelho/total)*100);
    printf("Percentual de ratos: %.2f %%\n", ((double)rato/total)*100);
    printf("Percentual de sapos: %.2f %%\n", ((double)sapo/total)*100);

    return 0;
} 
