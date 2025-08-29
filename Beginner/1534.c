#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    while(scanf("%d", &N) != EOF){
        int i, j, array[N][N];

        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if((i + j) == (N - 1))
                    array[i][j] = 2;
                else if(i == j)
                    array[i][j] = 1;
                else
                    array[i][j] = 3;
            }
        }
        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++)
                printf("%d", array[i][j]);
            printf("\n");
        }
    }

    return 0;
} 
