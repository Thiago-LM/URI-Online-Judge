#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    scanf(" %d", &N);
    if(N > 1 && N < 1000){
        for(i = 1; i < N+1; i++){
            printf("%d %d %d\n", i, i*i, i*i*i);
            printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
        }
    }
    return 0;
} 
