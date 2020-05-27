#include <stdio.h>

int main()
{
    int N, T, V, i, D = 0;

    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d %d", &T, &V);
        D += T * V;
    }

    printf("%d\n", D);

    return 0;
}
 
