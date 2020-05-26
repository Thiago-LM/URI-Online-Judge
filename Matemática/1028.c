#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, F1, F2, i, aux;

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d %d", &F1, &F2);
        while(F2 != 0){
            aux = F1 % F2;
            F1 = F2;
            F2 = aux;
        }
        printf("%d\n", F1);
    }

    return 0;
} 
