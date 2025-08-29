#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;

    while(scanf("%d %d", &N, &M) != EOF){
        unsigned long long fat1, fat2;
        for(fat1 = 1; N > 0; N--)
            fat1 *= N;
        for(fat2 = 1; M > 0; M--)
            fat2 *= M;
        printf("%llu\n", fat1+fat2);
    }

    return 0;
} 
