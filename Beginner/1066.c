#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10], i, contador_par=0, contador_impar=0, contador_pos=0, contador_neg=0;

    for(i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
        if(abs(numbers[i]) % 2 == 0)
            contador_par++;
        if(abs(numbers[i]) % 2 != 0)
            contador_impar++;
        if(numbers[i] > 0)
            contador_pos++;
        if(numbers[i] < 0)
            contador_neg++;
    }

    printf("%d valor(es) par(es)\n", contador_par);
    printf("%d valor(es) impar(es)\n", contador_impar);
    printf("%d valor(es) positivo(s)\n", contador_pos);
    printf("%d valor(es) negativo(s)\n", contador_neg);

    return 0;
} 
