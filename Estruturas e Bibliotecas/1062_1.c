#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trem[1010];
    int N;

    scanf("%d", &N);

    while(N != 0){
        int vagoes[N];
        int i, tam=0, indice=0;

        scanf("%d", &vagoes[0]);

        if(vagoes[0] == 0){
            scanf("%d", &N);
            printf("\n");
            continue;
        }

        for(i = 1; i < N; i++){
            scanf("%d", &vagoes[i]);
        }

        for(i = 1; i <= N; i++){
            trem[++tam] = i;

            while(tam > 0 && vagoes[indice] == trem[tam]){
                tam--;
                indice++;
            }
        }

        if(tam == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
} 
