#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, numbers[1010];
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            numbers[j] = i;
            j++;
        }
    }

    for(i = 0; i < j; i++){
        printf("%d\n", numbers[i]);
    }

    return 0;
} 
