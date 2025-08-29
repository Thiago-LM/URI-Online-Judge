#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *P, i, M = 0;
    int a[6] = {300, 1500, 600, 1000, 150};
    P = malloc(6 * sizeof(int));

    for(i = 0; i < 5; i++){
        scanf("%d", &P[i]);
        M += P[i] * a[i];
    }

    printf("%d\n", M + 225);

    return 0;
}
 
