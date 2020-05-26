#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j=0, numbers[2020];
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        if(i % 2 == 0){
            numbers[j] = i;
            j++;
        }
    }

    for(i = 0; i < j; i++){
        printf("%d^2 = %d\n", numbers[i], numbers[i]*numbers[i]);
    }

    return 0;
} 
