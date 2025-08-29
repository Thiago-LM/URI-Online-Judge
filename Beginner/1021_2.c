#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00,
                1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int moeda[] = {10000, 5000, 2000, 1000, 500, 200,
                100, 50, 25, 10, 5, 1, 0};
    int notas, moedas, valor, i;

    scanf("%d%*c%d", &notas, &moedas);

    valor = 100 * notas + moedas;

    printf("NOTAS:\n");
    for(i = 0; moeda[i] >= 200; i++){
        printf("%d nota(s) de R$ %.2f\n", valor/moeda[i], reais[i]);
        valor %= moeda[i];
    }
    printf("MOEDAS:\n");
    for(; moeda[i] > 0; i++){
        printf("%d moeda(s) de R$ %.2f\n", valor/moeda[i], reais[i]);
        valor %= moeda[i];
    }

    return 0;
} 
