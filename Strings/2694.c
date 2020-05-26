#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, soma=0;
    char expressao[14];
    scanf(" %d", &N);
    for(i = 0; i < N; i++){
        scanf(" %s", expressao);
        soma = (expressao[2] - '0')*10 + (expressao[3] - '0');
        soma += (expressao[5] - '0')*100 + (expressao[6] - '0')*10 + (expressao[7] - '0');
        soma += (expressao[11] - '0')*10 + (expressao[12] - '0');
        printf("%d\n", soma);

    }
    return 0;
} 
