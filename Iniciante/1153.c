#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, fat=1;
    scanf(" %d", &N);
    for(i = 0; i < N-1; i++)
        fat *= (N-i);
    printf("%d\n", fat);
    return 0;
} 
