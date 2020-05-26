#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moeda[] = {10000, 5000, 2000, 1000, 500, 200, 100, 0};
    int notas, valor, i;

    scanf("%d", &notas);

    valor = 100 * notas;

    printf("%d\n", notas);
    for(i = 0; moeda[i] >= 100; i++){
        printf("%d nota(s) de R$ %d,00\n", valor/moeda[i], moeda[i]/100);
        valor %= moeda[i];
    }

    return 0;
} 
