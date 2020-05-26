#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[110], i, maior=0;

    for(i = 0; i < 100; i++){
        scanf("%d", &numbers[i]);
        if(numbers[i] > numbers[maior]){
            maior = i;
        }
    }

    printf("%d\n", numbers[maior]);
    printf("%d\n", maior+1);

    return 0;
} 
