#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        float C;
        scanf("%f", &C);
        int dias=0;
        for(; C > 1; C -= (C/2))
            dias++;
        printf("%d dias\n", dias);
    }
    return 0;
} 
