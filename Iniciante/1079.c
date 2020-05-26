#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    scanf("%d", &N);

    float numbers[N][5];
    for(i = 0; i < N; i++){
        scanf("%f %f %f", &numbers[i][0], &numbers[i][1], &numbers[i][2]);
        printf("%.1f\n", (2*numbers[i][0] + 3*numbers[i][1] + 5*numbers[i][2]) / 10);
    }

    return 0;
} 
