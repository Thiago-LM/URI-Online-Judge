#include <stdio.h>

int main()
{
    int N, i;
    char Q[101];

    scanf("%d", &N);
    for(i = 0; i <= N; i++){
        fgets(Q, sizeof(Q), stdin);
    }

    for(i = 0; i < N; i++){
        printf("I am Toorg!\n");
    }

    return 0;
}
 
