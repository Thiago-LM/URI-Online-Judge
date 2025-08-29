#include <stdio.h>

int main()
{
    int C, *N, i, j, S = 0;

    scanf("%d", &C);
    N = malloc(C * sizeof(int));
    for(i = 0; i < C; i++){
        scanf("%d", &N[i]);
    }

    for(i = 0; i < C; i++){
        for(j = 1; j <= N[i]; j++){
            if(j % 2 == 0){
                S -= 1;
            } else {
                S += 1;
            }
        }
        printf("%d\n", S);
        S = 0;
    }

    return 0;
}
 
