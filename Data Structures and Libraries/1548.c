#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, a;

    scanf("%d", &N);

    for(a = 0; a < N; a++){
        int M, P[1010], P_ideal[1010], i, j, aux, contador=0;

        scanf("%d", &M);

        for(i = 0; i < M; i++){
            scanf("%d", &P[i]);
            P_ideal[i] = P[i];
        }

        for(i = 0; i < M ; i++){
            for(j = i + 1; j < M; j++){
                if(P_ideal[i] < P_ideal[j]){
                    aux = P_ideal[i];
                    P_ideal[i] = P_ideal[j];
                    P_ideal[j] = aux;
                }
            }
        }

        for(i = 0; i < M; i++){
            if(P[i] == P_ideal[i])
                contador++;
        }

        printf("%d\n", contador);
    }

    return 0;
} 
