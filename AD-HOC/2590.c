#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, N, i;
    scanf(" %d", &T);
    for(i = 0; i < T; i++){
        scanf(" %d", &N);
        if(N % 4 == 0)
            printf("%d\n", 1);
        if(N % 4 == 1)
            printf("%d\n", 7);
        if(N % 4 == 2)
            printf("%d\n", 9);
        if(N % 4 == 3)
            printf("%d\n", 3);
    }
    return 0;
} 
