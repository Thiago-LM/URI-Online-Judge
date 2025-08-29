#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k=4, l=7;
    for(i = 1; i <= 9; i++){
        for(j = l; j > k; j--){
            printf("I=%d J=%d\n", i, j);
        }
        k += 2;
        l += 2;
        i++;
    }

    return 0;
} 
