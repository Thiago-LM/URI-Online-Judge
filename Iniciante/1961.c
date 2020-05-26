#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P, N, i, a = 0;
    scanf(" %d %d", &P, &N);
    if(P >= 1 && P <= 5 && N >= 2 && N <= 100){
        int cano[N+1];
        for(i = 0; i < N; i++)
            scanf("%d", &cano[i]);
        for(i = 0; i < N-1; i++){
            if(abs(cano[i+1]-cano[i]) > P)
                a++;
        }
        if(a > 0)
            printf("GAME OVER\n");
        else
            printf("YOU WIN\n");
    }
    return 0;
} 
