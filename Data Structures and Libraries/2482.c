#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, N, M;


    fflush(stdin);
    scanf(" %d ", &N);
    char lingua[N][100], traducao[N][100];
    for(i = 0; i < N; i++){
        fgets(&lingua[i], sizeof(lingua), stdin);
        fgets(&traducao[i], sizeof(traducao), stdin);
    }

    scanf(" %d ", &M);

    char nome[M][100], linguagem[M][100];

    for(i = 0; i < M; i++){
        fgets(&nome[i], sizeof(nome), stdin);
        fgets(&linguagem[i], sizeof(linguagem), stdin);
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            if (strcmp(&lingua[j], &linguagem[i]) == 0){
                printf("%s", &nome[i]);
                printf("%s\n", &traducao[j]);
            }
        }
    }



    return 0;
} 
